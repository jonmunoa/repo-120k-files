// fichero 33102 -- macros y constantes -- MODIFICADO
#define LIMITE_33102 33302
#define FACTOR_33102 4

int aplicar_limite33102(int valor) {
    if (valor > LIMITE_33102) return LIMITE_33102;
    return valor * FACTOR_33102;
}
