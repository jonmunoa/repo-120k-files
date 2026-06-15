// fichero 32002 -- macros y constantes -- MODIFICADO
#define LIMITE_32002 32202
#define FACTOR_32002 4

int aplicar_limite32002(int valor) {
    if (valor > LIMITE_32002) return LIMITE_32002;
    return valor * FACTOR_32002;
}
