// fichero 48982 -- macros y constantes
#define LIMITE_48982 49082
#define FACTOR_48982 3

int aplicar_limite48982(int valor) {
    if (valor > LIMITE_48982) return LIMITE_48982;
    return valor * FACTOR_48982;
}
