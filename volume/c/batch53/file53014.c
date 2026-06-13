// fichero 53014 -- macros y constantes
#define LIMITE_53014 53114
#define FACTOR_53014 5

int aplicar_limite53014(int valor) {
    if (valor > LIMITE_53014) return LIMITE_53014;
    return valor * FACTOR_53014;
}
