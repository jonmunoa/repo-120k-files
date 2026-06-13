// fichero 52754 -- macros y constantes
#define LIMITE_52754 52854
#define FACTOR_52754 5

int aplicar_limite52754(int valor) {
    if (valor > LIMITE_52754) return LIMITE_52754;
    return valor * FACTOR_52754;
}
