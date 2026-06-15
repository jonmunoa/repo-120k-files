// fichero 32150 -- macros y constantes -- MODIFICADO
#define LIMITE_32150 32350
#define FACTOR_32150 2

int aplicar_limite32150(int valor) {
    if (valor > LIMITE_32150) return LIMITE_32150;
    return valor * FACTOR_32150;
}
