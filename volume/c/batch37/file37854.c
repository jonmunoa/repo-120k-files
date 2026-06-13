// fichero 37854 -- macros y constantes
#define LIMITE_37854 37954
#define FACTOR_37854 5

int aplicar_limite37854(int valor) {
    if (valor > LIMITE_37854) return LIMITE_37854;
    return valor * FACTOR_37854;
}
