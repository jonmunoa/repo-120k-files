// fichero 33426 -- macros y constantes -- MODIFICADO
#define LIMITE_33426 33626
#define FACTOR_33426 3

int aplicar_limite33426(int valor) {
    if (valor > LIMITE_33426) return LIMITE_33426;
    return valor * FACTOR_33426;
}
