// fichero 33254 -- macros y constantes -- MODIFICADO
#define LIMITE_33254 33454
#define FACTOR_33254 6

int aplicar_limite33254(int valor) {
    if (valor > LIMITE_33254) return LIMITE_33254;
    return valor * FACTOR_33254;
}
