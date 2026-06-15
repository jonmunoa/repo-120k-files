// fichero 33526 -- macros y constantes -- MODIFICADO
#define LIMITE_33526 33726
#define FACTOR_33526 3

int aplicar_limite33526(int valor) {
    if (valor > LIMITE_33526) return LIMITE_33526;
    return valor * FACTOR_33526;
}
