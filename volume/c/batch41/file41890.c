// fichero 41890 -- macros y constantes
#define LIMITE_41890 41990
#define FACTOR_41890 1

int aplicar_limite41890(int valor) {
    if (valor > LIMITE_41890) return LIMITE_41890;
    return valor * FACTOR_41890;
}
