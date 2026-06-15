// fichero 41890 -- macros y constantes -- MODIFICADO
#define LIMITE_41890 42090
#define FACTOR_41890 2

int aplicar_limite41890(int valor) {
    if (valor > LIMITE_41890) return LIMITE_41890;
    return valor * FACTOR_41890;
}
