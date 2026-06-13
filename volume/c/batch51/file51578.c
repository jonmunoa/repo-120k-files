// fichero 51578 -- macros y constantes
#define LIMITE_51578 51678
#define FACTOR_51578 4

int aplicar_limite51578(int valor) {
    if (valor > LIMITE_51578) return LIMITE_51578;
    return valor * FACTOR_51578;
}
