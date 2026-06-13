// fichero 50558 -- macros y constantes
#define LIMITE_50558 50658
#define FACTOR_50558 4

int aplicar_limite50558(int valor) {
    if (valor > LIMITE_50558) return LIMITE_50558;
    return valor * FACTOR_50558;
}
