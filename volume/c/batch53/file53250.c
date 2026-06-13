// fichero 53250 -- macros y constantes
#define LIMITE_53250 53350
#define FACTOR_53250 1

int aplicar_limite53250(int valor) {
    if (valor > LIMITE_53250) return LIMITE_53250;
    return valor * FACTOR_53250;
}
