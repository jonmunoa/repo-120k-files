// fichero 30890 -- macros y constantes
#define LIMITE_30890 30990
#define FACTOR_30890 1

int aplicar_limite30890(int valor) {
    if (valor > LIMITE_30890) return LIMITE_30890;
    return valor * FACTOR_30890;
}
