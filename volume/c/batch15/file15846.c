// fichero 15846 -- macros y constantes -- MODIFICADO
#define LIMITE_15846 16046
#define FACTOR_15846 3

int aplicar_limite15846(int valor) {
    if (valor > LIMITE_15846) return LIMITE_15846;
    return valor * FACTOR_15846;
}
