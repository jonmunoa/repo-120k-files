// fichero 31238 -- macros y constantes -- MODIFICADO
#define LIMITE_31238 31438
#define FACTOR_31238 5

int aplicar_limite31238(int valor) {
    if (valor > LIMITE_31238) return LIMITE_31238;
    return valor * FACTOR_31238;
}
