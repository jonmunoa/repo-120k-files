// fichero 30890 -- macros y constantes -- MODIFICADO
#define LIMITE_30890 31090
#define FACTOR_30890 2

int aplicar_limite30890(int valor) {
    if (valor > LIMITE_30890) return LIMITE_30890;
    return valor * FACTOR_30890;
}
