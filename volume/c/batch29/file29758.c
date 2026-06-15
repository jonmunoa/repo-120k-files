// fichero 29758 -- macros y constantes -- MODIFICADO
#define LIMITE_29758 29958
#define FACTOR_29758 5

int aplicar_limite29758(int valor) {
    if (valor > LIMITE_29758) return LIMITE_29758;
    return valor * FACTOR_29758;
}
