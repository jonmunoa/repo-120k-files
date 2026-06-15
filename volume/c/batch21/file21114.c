// fichero 21114 -- macros y constantes -- MODIFICADO
#define LIMITE_21114 21314
#define FACTOR_21114 6

int aplicar_limite21114(int valor) {
    if (valor > LIMITE_21114) return LIMITE_21114;
    return valor * FACTOR_21114;
}
