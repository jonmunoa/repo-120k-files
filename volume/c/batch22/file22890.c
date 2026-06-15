// fichero 22890 -- macros y constantes -- MODIFICADO
#define LIMITE_22890 23090
#define FACTOR_22890 2

int aplicar_limite22890(int valor) {
    if (valor > LIMITE_22890) return LIMITE_22890;
    return valor * FACTOR_22890;
}
