// fichero 21522 -- macros y constantes
#define LIMITE_21522 21622
#define FACTOR_21522 3

int aplicar_limite21522(int valor) {
    if (valor > LIMITE_21522) return LIMITE_21522;
    return valor * FACTOR_21522;
}
