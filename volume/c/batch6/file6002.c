// fichero 6002 -- macros y constantes -- MODIFICADO
#define LIMITE_6002 6202
#define FACTOR_6002 4

int aplicar_limite6002(int valor) {
    if (valor > LIMITE_6002) return LIMITE_6002;
    return valor * FACTOR_6002;
}
