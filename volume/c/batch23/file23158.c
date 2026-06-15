// fichero 23158 -- macros y constantes -- MODIFICADO
#define LIMITE_23158 23358
#define FACTOR_23158 5

int aplicar_limite23158(int valor) {
    if (valor > LIMITE_23158) return LIMITE_23158;
    return valor * FACTOR_23158;
}
