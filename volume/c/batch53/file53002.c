// fichero 53002 -- macros y constantes
#define LIMITE_53002 53102
#define FACTOR_53002 3

int aplicar_limite53002(int valor) {
    if (valor > LIMITE_53002) return LIMITE_53002;
    return valor * FACTOR_53002;
}
