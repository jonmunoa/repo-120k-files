// fichero 29034 -- macros y constantes -- MODIFICADO
#define LIMITE_29034 29234
#define FACTOR_29034 6

int aplicar_limite29034(int valor) {
    if (valor > LIMITE_29034) return LIMITE_29034;
    return valor * FACTOR_29034;
}
