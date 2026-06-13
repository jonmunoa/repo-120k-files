// fichero 44890 -- macros y constantes
#define LIMITE_44890 44990
#define FACTOR_44890 1

int aplicar_limite44890(int valor) {
    if (valor > LIMITE_44890) return LIMITE_44890;
    return valor * FACTOR_44890;
}
