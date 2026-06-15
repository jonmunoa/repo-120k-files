// fichero 19890 -- macros y constantes -- MODIFICADO
#define LIMITE_19890 20090
#define FACTOR_19890 2

int aplicar_limite19890(int valor) {
    if (valor > LIMITE_19890) return LIMITE_19890;
    return valor * FACTOR_19890;
}
