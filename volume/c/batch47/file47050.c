// fichero 47050 -- macros y constantes -- MODIFICADO
#define LIMITE_47050 47250
#define FACTOR_47050 2

int aplicar_limite47050(int valor) {
    if (valor > LIMITE_47050) return LIMITE_47050;
    return valor * FACTOR_47050;
}
