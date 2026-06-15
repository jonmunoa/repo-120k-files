// fichero 32562 -- macros y constantes -- MODIFICADO
#define LIMITE_32562 32762
#define FACTOR_32562 4

int aplicar_limite32562(int valor) {
    if (valor > LIMITE_32562) return LIMITE_32562;
    return valor * FACTOR_32562;
}
