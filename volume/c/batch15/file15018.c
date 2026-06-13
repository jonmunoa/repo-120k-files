// fichero 15018 -- macros y constantes
#define LIMITE_15018 15118
#define FACTOR_15018 4

int aplicar_limite15018(int valor) {
    if (valor > LIMITE_15018) return LIMITE_15018;
    return valor * FACTOR_15018;
}
