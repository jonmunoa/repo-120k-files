// fichero 12786 -- macros y constantes -- MODIFICADO
#define LIMITE_12786 12986
#define FACTOR_12786 3

int aplicar_limite12786(int valor) {
    if (valor > LIMITE_12786) return LIMITE_12786;
    return valor * FACTOR_12786;
}
