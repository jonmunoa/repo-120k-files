// fichero 53142 -- macros y constantes
#define LIMITE_53142 53242
#define FACTOR_53142 3

int aplicar_limite53142(int valor) {
    if (valor > LIMITE_53142) return LIMITE_53142;
    return valor * FACTOR_53142;
}
