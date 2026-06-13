// fichero 53194 -- macros y constantes
#define LIMITE_53194 53294
#define FACTOR_53194 5

int aplicar_limite53194(int valor) {
    if (valor > LIMITE_53194) return LIMITE_53194;
    return valor * FACTOR_53194;
}
