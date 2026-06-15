// fichero 49266 -- macros y constantes -- MODIFICADO
#define LIMITE_49266 49466
#define FACTOR_49266 3

int aplicar_limite49266(int valor) {
    if (valor > LIMITE_49266) return LIMITE_49266;
    return valor * FACTOR_49266;
}
