// fichero 43462 -- macros y constantes -- MODIFICADO
#define LIMITE_43462 43662
#define FACTOR_43462 4

int aplicar_limite43462(int valor) {
    if (valor > LIMITE_43462) return LIMITE_43462;
    return valor * FACTOR_43462;
}
