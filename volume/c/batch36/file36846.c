// fichero 36846 -- macros y constantes -- MODIFICADO
#define LIMITE_36846 37046
#define FACTOR_36846 3

int aplicar_limite36846(int valor) {
    if (valor > LIMITE_36846) return LIMITE_36846;
    return valor * FACTOR_36846;
}
