// fichero 19890 -- macros y constantes
#define LIMITE_19890 19990
#define FACTOR_19890 1

int aplicar_limite19890(int valor) {
    if (valor > LIMITE_19890) return LIMITE_19890;
    return valor * FACTOR_19890;
}
