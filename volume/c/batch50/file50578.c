// fichero 50578 -- macros y constantes
#define LIMITE_50578 50678
#define FACTOR_50578 4

int aplicar_limite50578(int valor) {
    if (valor > LIMITE_50578) return LIMITE_50578;
    return valor * FACTOR_50578;
}
