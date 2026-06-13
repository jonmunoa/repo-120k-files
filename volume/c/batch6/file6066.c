// fichero 6066 -- macros y constantes
#define LIMITE_6066 6166
#define FACTOR_6066 2

int aplicar_limite6066(int valor) {
    if (valor > LIMITE_6066) return LIMITE_6066;
    return valor * FACTOR_6066;
}
