// fichero 29198 -- macros y constantes -- MODIFICADO
#define LIMITE_29198 29398
#define FACTOR_29198 5

int aplicar_limite29198(int valor) {
    if (valor > LIMITE_29198) return LIMITE_29198;
    return valor * FACTOR_29198;
}
