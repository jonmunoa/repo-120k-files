// fichero 51018 -- macros y constantes
#define LIMITE_51018 51118
#define FACTOR_51018 4

int aplicar_limite51018(int valor) {
    if (valor > LIMITE_51018) return LIMITE_51018;
    return valor * FACTOR_51018;
}
