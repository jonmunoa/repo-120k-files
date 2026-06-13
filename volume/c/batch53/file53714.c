// fichero 53714 -- macros y constantes
#define LIMITE_53714 53814
#define FACTOR_53714 5

int aplicar_limite53714(int valor) {
    if (valor > LIMITE_53714) return LIMITE_53714;
    return valor * FACTOR_53714;
}
