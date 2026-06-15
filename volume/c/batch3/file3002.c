// fichero 3002 -- macros y constantes -- MODIFICADO
#define LIMITE_3002 3202
#define FACTOR_3002 4

int aplicar_limite3002(int valor) {
    if (valor > LIMITE_3002) return LIMITE_3002;
    return valor * FACTOR_3002;
}
