// fichero 4002 -- macros y constantes -- MODIFICADO
#define LIMITE_4002 4202
#define FACTOR_4002 4

int aplicar_limite4002(int valor) {
    if (valor > LIMITE_4002) return LIMITE_4002;
    return valor * FACTOR_4002;
}
