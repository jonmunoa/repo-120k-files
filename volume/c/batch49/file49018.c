// fichero 49018 -- macros y constantes
#define LIMITE_49018 49118
#define FACTOR_49018 4

int aplicar_limite49018(int valor) {
    if (valor > LIMITE_49018) return LIMITE_49018;
    return valor * FACTOR_49018;
}
