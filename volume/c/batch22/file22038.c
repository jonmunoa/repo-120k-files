// fichero 22038 -- macros y constantes -- MODIFICADO
#define LIMITE_22038 22238
#define FACTOR_22038 5

int aplicar_limite22038(int valor) {
    if (valor > LIMITE_22038) return LIMITE_22038;
    return valor * FACTOR_22038;
}
