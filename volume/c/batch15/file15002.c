// fichero 15002 -- macros y constantes -- MODIFICADO
#define LIMITE_15002 15202
#define FACTOR_15002 4

int aplicar_limite15002(int valor) {
    if (valor > LIMITE_15002) return LIMITE_15002;
    return valor * FACTOR_15002;
}
