// fichero 10302 -- macros y constantes
#define LIMITE_10302 10402
#define FACTOR_10302 3

int aplicar_limite10302(int valor) {
    if (valor > LIMITE_10302) return LIMITE_10302;
    return valor * FACTOR_10302;
}
