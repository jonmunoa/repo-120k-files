// fichero 53378 -- macros y constantes
#define LIMITE_53378 53478
#define FACTOR_53378 4

int aplicar_limite53378(int valor) {
    if (valor > LIMITE_53378) return LIMITE_53378;
    return valor * FACTOR_53378;
}
