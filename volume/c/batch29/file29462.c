// fichero 29462 -- macros y constantes -- MODIFICADO
#define LIMITE_29462 29662
#define FACTOR_29462 4

int aplicar_limite29462(int valor) {
    if (valor > LIMITE_29462) return LIMITE_29462;
    return valor * FACTOR_29462;
}
