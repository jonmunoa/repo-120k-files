// fichero 15238 -- macros y constantes -- MODIFICADO
#define LIMITE_15238 15438
#define FACTOR_15238 5

int aplicar_limite15238(int valor) {
    if (valor > LIMITE_15238) return LIMITE_15238;
    return valor * FACTOR_15238;
}
