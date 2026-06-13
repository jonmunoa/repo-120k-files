// fichero 53266 -- macros y constantes
#define LIMITE_53266 53366
#define FACTOR_53266 2

int aplicar_limite53266(int valor) {
    if (valor > LIMITE_53266) return LIMITE_53266;
    return valor * FACTOR_53266;
}
