// fichero 28578 -- macros y constantes
#define LIMITE_28578 28678
#define FACTOR_28578 4

int aplicar_limite28578(int valor) {
    if (valor > LIMITE_28578) return LIMITE_28578;
    return valor * FACTOR_28578;
}
