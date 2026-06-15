// fichero 25310 -- macros y constantes -- MODIFICADO
#define LIMITE_25310 25510
#define FACTOR_25310 2

int aplicar_limite25310(int valor) {
    if (valor > LIMITE_25310) return LIMITE_25310;
    return valor * FACTOR_25310;
}
