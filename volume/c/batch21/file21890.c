// fichero 21890 -- macros y constantes -- MODIFICADO
#define LIMITE_21890 22090
#define FACTOR_21890 2

int aplicar_limite21890(int valor) {
    if (valor > LIMITE_21890) return LIMITE_21890;
    return valor * FACTOR_21890;
}
