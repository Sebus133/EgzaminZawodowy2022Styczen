package com.example.sprawdzaniemaila

import android.os.Bundle
import android.view.View
import android.widget.TextView
import androidx.appcompat.app.AppCompatActivity

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
    }

    fun sprawdz(v: View?) {
        val email = findViewById<TextView>(R.id.email)
        val haslo = findViewById<TextView>(R.id.haslo)
        val haslo2 = findViewById<TextView>(R.id.haslo2)
        val komunikat = findViewById<TextView>(R.id.komunikat)
        val emailTekst = email.text
        val hasloTekst = haslo.text
        val haslo2Tekst = haslo2.text

        if (emailTekst.contains("@")) {
            if (hasloTekst==haslo2Tekst) {
                komunikat.text = "Witaj $emailTekst"
            } else {
                komunikat.text = "$hasloTekst , $haslo2Tekst"
            }
        } else {
            komunikat.text = "Nieprawidłowy adres e-mail"
        }
    }
}