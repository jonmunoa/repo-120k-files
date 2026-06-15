// fichero 15978 -- macros y constantes -- MODIFICADO
#define LIMITE_15978 16178
#define FACTOR_15978 5

int aplicar_limite15978(int valor) {
    if (valor > LIMITE_15978) return LIMITE_15978;
    return valor * FACTOR_15978;
}
