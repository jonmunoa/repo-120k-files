// fichero 21230 -- macros y constantes -- MODIFICADO
#define LIMITE_21230 21430
#define FACTOR_21230 2

int aplicar_limite21230(int valor) {
    if (valor > LIMITE_21230) return LIMITE_21230;
    return valor * FACTOR_21230;
}
