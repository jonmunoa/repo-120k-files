// fichero 53066 -- macros y constantes
#define LIMITE_53066 53166
#define FACTOR_53066 2

int aplicar_limite53066(int valor) {
    if (valor > LIMITE_53066) return LIMITE_53066;
    return valor * FACTOR_53066;
}
