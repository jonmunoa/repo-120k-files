// fichero 45890 -- macros y constantes -- MODIFICADO
#define LIMITE_45890 46090
#define FACTOR_45890 2

int aplicar_limite45890(int valor) {
    if (valor > LIMITE_45890) return LIMITE_45890;
    return valor * FACTOR_45890;
}
