// fichero 33490 -- macros y constantes -- MODIFICADO
#define LIMITE_33490 33690
#define FACTOR_33490 2

int aplicar_limite33490(int valor) {
    if (valor > LIMITE_33490) return LIMITE_33490;
    return valor * FACTOR_33490;
}
