// fichero 3426 -- macros y constantes -- MODIFICADO
#define LIMITE_3426 3626
#define FACTOR_3426 3

int aplicar_limite3426(int valor) {
    if (valor > LIMITE_3426) return LIMITE_3426;
    return valor * FACTOR_3426;
}
