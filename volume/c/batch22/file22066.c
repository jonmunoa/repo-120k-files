// fichero 22066 -- macros y constantes
#define LIMITE_22066 22166
#define FACTOR_22066 2

int aplicar_limite22066(int valor) {
    if (valor > LIMITE_22066) return LIMITE_22066;
    return valor * FACTOR_22066;
}
