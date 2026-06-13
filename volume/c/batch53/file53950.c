// fichero 53950 -- macros y constantes
#define LIMITE_53950 54050
#define FACTOR_53950 1

int aplicar_limite53950(int valor) {
    if (valor > LIMITE_53950) return LIMITE_53950;
    return valor * FACTOR_53950;
}
