// fichero 53782 -- macros y constantes
#define LIMITE_53782 53882
#define FACTOR_53782 3

int aplicar_limite53782(int valor) {
    if (valor > LIMITE_53782) return LIMITE_53782;
    return valor * FACTOR_53782;
}
