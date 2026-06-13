// fichero 23418 -- macros y constantes
#define LIMITE_23418 23518
#define FACTOR_23418 4

int aplicar_limite23418(int valor) {
    if (valor > LIMITE_23418) return LIMITE_23418;
    return valor * FACTOR_23418;
}
