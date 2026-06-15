// fichero 22 -- macros y constantes -- MODIFICADO
#define LIMITE_22 222
#define FACTOR_22 4

int aplicar_limite22(int valor) {
    if (valor > LIMITE_22) return LIMITE_22;
    return valor * FACTOR_22;
}
