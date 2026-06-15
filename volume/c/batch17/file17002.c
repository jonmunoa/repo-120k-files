// fichero 17002 -- macros y constantes -- MODIFICADO
#define LIMITE_17002 17202
#define FACTOR_17002 4

int aplicar_limite17002(int valor) {
    if (valor > LIMITE_17002) return LIMITE_17002;
    return valor * FACTOR_17002;
}
