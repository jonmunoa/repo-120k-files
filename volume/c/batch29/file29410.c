// fichero 29410 -- macros y constantes
#define LIMITE_29410 29510
#define FACTOR_29410 1

int aplicar_limite29410(int valor) {
    if (valor > LIMITE_29410) return LIMITE_29410;
    return valor * FACTOR_29410;
}
