// fichero 13158 -- macros y constantes -- MODIFICADO
#define LIMITE_13158 13358
#define FACTOR_13158 5

int aplicar_limite13158(int valor) {
    if (valor > LIMITE_13158) return LIMITE_13158;
    return valor * FACTOR_13158;
}
