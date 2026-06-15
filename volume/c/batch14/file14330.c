// fichero 14330 -- macros y constantes -- MODIFICADO
#define LIMITE_14330 14530
#define FACTOR_14330 2

int aplicar_limite14330(int valor) {
    if (valor > LIMITE_14330) return LIMITE_14330;
    return valor * FACTOR_14330;
}
