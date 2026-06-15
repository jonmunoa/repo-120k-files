// fichero 32762 -- macros y constantes -- MODIFICADO
#define LIMITE_32762 32962
#define FACTOR_32762 4

int aplicar_limite32762(int valor) {
    if (valor > LIMITE_32762) return LIMITE_32762;
    return valor * FACTOR_32762;
}
