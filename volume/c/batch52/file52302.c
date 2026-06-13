// fichero 52302 -- macros y constantes
#define LIMITE_52302 52402
#define FACTOR_52302 3

int aplicar_limite52302(int valor) {
    if (valor > LIMITE_52302) return LIMITE_52302;
    return valor * FACTOR_52302;
}
