// fichero 6890 -- macros y constantes
#define LIMITE_6890 6990
#define FACTOR_6890 1

int aplicar_limite6890(int valor) {
    if (valor > LIMITE_6890) return LIMITE_6890;
    return valor * FACTOR_6890;
}
