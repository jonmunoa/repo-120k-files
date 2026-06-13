// fichero 53078 -- macros y constantes
#define LIMITE_53078 53178
#define FACTOR_53078 4

int aplicar_limite53078(int valor) {
    if (valor > LIMITE_53078) return LIMITE_53078;
    return valor * FACTOR_53078;
}
