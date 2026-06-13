// fichero 53166 -- macros y constantes
#define LIMITE_53166 53266
#define FACTOR_53166 2

int aplicar_limite53166(int valor) {
    if (valor > LIMITE_53166) return LIMITE_53166;
    return valor * FACTOR_53166;
}
