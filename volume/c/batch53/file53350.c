// fichero 53350 -- macros y constantes
#define LIMITE_53350 53450
#define FACTOR_53350 1

int aplicar_limite53350(int valor) {
    if (valor > LIMITE_53350) return LIMITE_53350;
    return valor * FACTOR_53350;
}
