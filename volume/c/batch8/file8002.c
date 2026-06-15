// fichero 8002 -- macros y constantes -- MODIFICADO
#define LIMITE_8002 8202
#define FACTOR_8002 4

int aplicar_limite8002(int valor) {
    if (valor > LIMITE_8002) return LIMITE_8002;
    return valor * FACTOR_8002;
}
