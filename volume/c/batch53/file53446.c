// fichero 53446 -- macros y constantes
#define LIMITE_53446 53546
#define FACTOR_53446 2

int aplicar_limite53446(int valor) {
    if (valor > LIMITE_53446) return LIMITE_53446;
    return valor * FACTOR_53446;
}
