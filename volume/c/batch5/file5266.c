// fichero 5266 -- macros y constantes -- MODIFICADO
#define LIMITE_5266 5466
#define FACTOR_5266 3

int aplicar_limite5266(int valor) {
    if (valor > LIMITE_5266) return LIMITE_5266;
    return valor * FACTOR_5266;
}
