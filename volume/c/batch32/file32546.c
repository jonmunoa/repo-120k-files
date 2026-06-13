// fichero 32546 -- macros y constantes
#define LIMITE_32546 32646
#define FACTOR_32546 2

int aplicar_limite32546(int valor) {
    if (valor > LIMITE_32546) return LIMITE_32546;
    return valor * FACTOR_32546;
}
