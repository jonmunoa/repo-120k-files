// fichero 53594 -- macros y constantes
#define LIMITE_53594 53694
#define FACTOR_53594 5

int aplicar_limite53594(int valor) {
    if (valor > LIMITE_53594) return LIMITE_53594;
    return valor * FACTOR_53594;
}
