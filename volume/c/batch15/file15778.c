// fichero 15778 -- macros y constantes -- MODIFICADO
#define LIMITE_15778 15978
#define FACTOR_15778 5

int aplicar_limite15778(int valor) {
    if (valor > LIMITE_15778) return LIMITE_15778;
    return valor * FACTOR_15778;
}
