// fichero 29410 -- macros y constantes -- MODIFICADO
#define LIMITE_29410 29610
#define FACTOR_29410 2

int aplicar_limite29410(int valor) {
    if (valor > LIMITE_29410) return LIMITE_29410;
    return valor * FACTOR_29410;
}
