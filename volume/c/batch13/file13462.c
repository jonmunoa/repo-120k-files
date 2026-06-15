// fichero 13462 -- macros y constantes -- MODIFICADO
#define LIMITE_13462 13662
#define FACTOR_13462 4

int aplicar_limite13462(int valor) {
    if (valor > LIMITE_13462) return LIMITE_13462;
    return valor * FACTOR_13462;
}
