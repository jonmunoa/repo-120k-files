// fichero 16466 -- macros y constantes -- MODIFICADO
#define LIMITE_16466 16666
#define FACTOR_16466 3

int aplicar_limite16466(int valor) {
    if (valor > LIMITE_16466) return LIMITE_16466;
    return valor * FACTOR_16466;
}
