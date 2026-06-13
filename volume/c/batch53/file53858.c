// fichero 53858 -- macros y constantes
#define LIMITE_53858 53958
#define FACTOR_53858 4

int aplicar_limite53858(int valor) {
    if (valor > LIMITE_53858) return LIMITE_53858;
    return valor * FACTOR_53858;
}
