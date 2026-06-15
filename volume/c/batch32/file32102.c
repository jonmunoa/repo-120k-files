// fichero 32102 -- macros y constantes -- MODIFICADO
#define LIMITE_32102 32302
#define FACTOR_32102 4

int aplicar_limite32102(int valor) {
    if (valor > LIMITE_32102) return LIMITE_32102;
    return valor * FACTOR_32102;
}
