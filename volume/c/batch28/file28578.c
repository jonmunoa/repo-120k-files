// fichero 28578 -- macros y constantes -- MODIFICADO
#define LIMITE_28578 28778
#define FACTOR_28578 5

int aplicar_limite28578(int valor) {
    if (valor > LIMITE_28578) return LIMITE_28578;
    return valor * FACTOR_28578;
}
