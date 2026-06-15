// fichero 21414 -- macros y constantes -- MODIFICADO
#define LIMITE_21414 21614
#define FACTOR_21414 6

int aplicar_limite21414(int valor) {
    if (valor > LIMITE_21414) return LIMITE_21414;
    return valor * FACTOR_21414;
}
