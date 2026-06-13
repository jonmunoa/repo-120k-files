// fichero 22890 -- macros y constantes
#define LIMITE_22890 22990
#define FACTOR_22890 1

int aplicar_limite22890(int valor) {
    if (valor > LIMITE_22890) return LIMITE_22890;
    return valor * FACTOR_22890;
}
