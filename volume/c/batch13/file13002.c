// fichero 13002 -- macros y constantes -- MODIFICADO
#define LIMITE_13002 13202
#define FACTOR_13002 4

int aplicar_limite13002(int valor) {
    if (valor > LIMITE_13002) return LIMITE_13002;
    return valor * FACTOR_13002;
}
