// fichero 33962 -- macros y constantes -- MODIFICADO
#define LIMITE_33962 34162
#define FACTOR_33962 4

int aplicar_limite33962(int valor) {
    if (valor > LIMITE_33962) return LIMITE_33962;
    return valor * FACTOR_33962;
}
