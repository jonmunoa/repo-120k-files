// fichero 33382 -- macros y constantes -- MODIFICADO
#define LIMITE_33382 33582
#define FACTOR_33382 4

int aplicar_limite33382(int valor) {
    if (valor > LIMITE_33382) return LIMITE_33382;
    return valor * FACTOR_33382;
}
