// fichero 34018 -- macros y constantes
#define LIMITE_34018 34118
#define FACTOR_34018 4

int aplicar_limite34018(int valor) {
    if (valor > LIMITE_34018) return LIMITE_34018;
    return valor * FACTOR_34018;
}
