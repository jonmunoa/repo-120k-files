// fichero 22418 -- macros y constantes -- MODIFICADO
#define LIMITE_22418 22618
#define FACTOR_22418 5

int aplicar_limite22418(int valor) {
    if (valor > LIMITE_22418) return LIMITE_22418;
    return valor * FACTOR_22418;
}
