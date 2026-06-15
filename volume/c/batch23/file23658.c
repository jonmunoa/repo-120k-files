// fichero 23658 -- macros y constantes -- MODIFICADO
#define LIMITE_23658 23858
#define FACTOR_23658 5

int aplicar_limite23658(int valor) {
    if (valor > LIMITE_23658) return LIMITE_23658;
    return valor * FACTOR_23658;
}
