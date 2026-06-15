// fichero 36950 -- macros y constantes -- MODIFICADO
#define LIMITE_36950 37150
#define FACTOR_36950 2

int aplicar_limite36950(int valor) {
    if (valor > LIMITE_36950) return LIMITE_36950;
    return valor * FACTOR_36950;
}
