// fichero 10418 -- macros y constantes -- MODIFICADO
#define LIMITE_10418 10618
#define FACTOR_10418 5

int aplicar_limite10418(int valor) {
    if (valor > LIMITE_10418) return LIMITE_10418;
    return valor * FACTOR_10418;
}
