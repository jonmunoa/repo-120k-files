// fichero 34890 -- macros y constantes
#define LIMITE_34890 34990
#define FACTOR_34890 1

int aplicar_limite34890(int valor) {
    if (valor > LIMITE_34890) return LIMITE_34890;
    return valor * FACTOR_34890;
}
