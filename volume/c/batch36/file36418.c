// fichero 36418 -- macros y constantes -- MODIFICADO
#define LIMITE_36418 36618
#define FACTOR_36418 5

int aplicar_limite36418(int valor) {
    if (valor > LIMITE_36418) return LIMITE_36418;
    return valor * FACTOR_36418;
}
