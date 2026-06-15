// fichero 15030 -- macros y constantes -- MODIFICADO
#define LIMITE_15030 15230
#define FACTOR_15030 2

int aplicar_limite15030(int valor) {
    if (valor > LIMITE_15030) return LIMITE_15030;
    return valor * FACTOR_15030;
}
