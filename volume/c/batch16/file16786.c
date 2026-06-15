// fichero 16786 -- macros y constantes -- MODIFICADO
#define LIMITE_16786 16986
#define FACTOR_16786 3

int aplicar_limite16786(int valor) {
    if (valor > LIMITE_16786) return LIMITE_16786;
    return valor * FACTOR_16786;
}
