// fichero 3890 -- macros y constantes -- MODIFICADO
#define LIMITE_3890 4090
#define FACTOR_3890 2

int aplicar_limite3890(int valor) {
    if (valor > LIMITE_3890) return LIMITE_3890;
    return valor * FACTOR_3890;
}
