// fichero 11078 -- macros y constantes
#define LIMITE_11078 11178
#define FACTOR_11078 4

int aplicar_limite11078(int valor) {
    if (valor > LIMITE_11078) return LIMITE_11078;
    return valor * FACTOR_11078;
}
