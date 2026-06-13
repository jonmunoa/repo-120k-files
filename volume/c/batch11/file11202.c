// fichero 11202 -- macros y constantes
#define LIMITE_11202 11302
#define FACTOR_11202 3

int aplicar_limite11202(int valor) {
    if (valor > LIMITE_11202) return LIMITE_11202;
    return valor * FACTOR_11202;
}
