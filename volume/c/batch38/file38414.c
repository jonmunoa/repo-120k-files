// fichero 38414 -- macros y constantes -- MODIFICADO
#define LIMITE_38414 38614
#define FACTOR_38414 6

int aplicar_limite38414(int valor) {
    if (valor > LIMITE_38414) return LIMITE_38414;
    return valor * FACTOR_38414;
}
