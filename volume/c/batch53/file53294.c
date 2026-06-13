// fichero 53294 -- macros y constantes
#define LIMITE_53294 53394
#define FACTOR_53294 5

int aplicar_limite53294(int valor) {
    if (valor > LIMITE_53294) return LIMITE_53294;
    return valor * FACTOR_53294;
}
