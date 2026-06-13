// fichero 6962 -- macros y constantes
#define LIMITE_6962 7062
#define FACTOR_6962 3

int aplicar_limite6962(int valor) {
    if (valor > LIMITE_6962) return LIMITE_6962;
    return valor * FACTOR_6962;
}
