// fichero 42846 -- macros y constantes -- MODIFICADO
#define LIMITE_42846 43046
#define FACTOR_42846 3

int aplicar_limite42846(int valor) {
    if (valor > LIMITE_42846) return LIMITE_42846;
    return valor * FACTOR_42846;
}
