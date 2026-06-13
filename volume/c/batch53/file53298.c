// fichero 53298 -- macros y constantes
#define LIMITE_53298 53398
#define FACTOR_53298 4

int aplicar_limite53298(int valor) {
    if (valor > LIMITE_53298) return LIMITE_53298;
    return valor * FACTOR_53298;
}
