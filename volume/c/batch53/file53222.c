// fichero 53222 -- macros y constantes
#define LIMITE_53222 53322
#define FACTOR_53222 3

int aplicar_limite53222(int valor) {
    if (valor > LIMITE_53222) return LIMITE_53222;
    return valor * FACTOR_53222;
}
