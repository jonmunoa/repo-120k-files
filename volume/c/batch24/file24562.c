// fichero 24562 -- macros y constantes -- MODIFICADO
#define LIMITE_24562 24762
#define FACTOR_24562 4

int aplicar_limite24562(int valor) {
    if (valor > LIMITE_24562) return LIMITE_24562;
    return valor * FACTOR_24562;
}
