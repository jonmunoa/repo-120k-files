// fichero 22706 -- macros y constantes -- MODIFICADO
#define LIMITE_22706 22906
#define FACTOR_22706 3

int aplicar_limite22706(int valor) {
    if (valor > LIMITE_22706) return LIMITE_22706;
    return valor * FACTOR_22706;
}
