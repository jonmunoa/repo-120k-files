// fichero 23418 -- macros y constantes -- MODIFICADO
#define LIMITE_23418 23618
#define FACTOR_23418 5

int aplicar_limite23418(int valor) {
    if (valor > LIMITE_23418) return LIMITE_23418;
    return valor * FACTOR_23418;
}
