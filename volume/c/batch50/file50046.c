// fichero 50046 -- macros y constantes
#define LIMITE_50046 50146
#define FACTOR_50046 2

int aplicar_limite50046(int valor) {
    if (valor > LIMITE_50046) return LIMITE_50046;
    return valor * FACTOR_50046;
}
