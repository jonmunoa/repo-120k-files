// fichero 19362 -- macros y constantes -- MODIFICADO
#define LIMITE_19362 19562
#define FACTOR_19362 4

int aplicar_limite19362(int valor) {
    if (valor > LIMITE_19362) return LIMITE_19362;
    return valor * FACTOR_19362;
}
