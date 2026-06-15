// fichero 33194 -- macros y constantes -- MODIFICADO
#define LIMITE_33194 33394
#define FACTOR_33194 6

int aplicar_limite33194(int valor) {
    if (valor > LIMITE_33194) return LIMITE_33194;
    return valor * FACTOR_33194;
}
