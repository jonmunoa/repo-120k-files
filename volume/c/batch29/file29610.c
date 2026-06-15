// fichero 29610 -- macros y constantes -- MODIFICADO
#define LIMITE_29610 29810
#define FACTOR_29610 2

int aplicar_limite29610(int valor) {
    if (valor > LIMITE_29610) return LIMITE_29610;
    return valor * FACTOR_29610;
}
