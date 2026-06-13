// fichero 7546 -- macros y constantes
#define LIMITE_7546 7646
#define FACTOR_7546 2

int aplicar_limite7546(int valor) {
    if (valor > LIMITE_7546) return LIMITE_7546;
    return valor * FACTOR_7546;
}
