// fichero 40102 -- macros y constantes -- MODIFICADO
#define LIMITE_40102 40302
#define FACTOR_40102 4

int aplicar_limite40102(int valor) {
    if (valor > LIMITE_40102) return LIMITE_40102;
    return valor * FACTOR_40102;
}
