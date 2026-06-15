// fichero 35558 -- macros y constantes -- MODIFICADO
#define LIMITE_35558 35758
#define FACTOR_35558 5

int aplicar_limite35558(int valor) {
    if (valor > LIMITE_35558) return LIMITE_35558;
    return valor * FACTOR_35558;
}
