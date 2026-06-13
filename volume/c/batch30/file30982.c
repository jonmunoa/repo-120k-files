// fichero 30982 -- macros y constantes
#define LIMITE_30982 31082
#define FACTOR_30982 3

int aplicar_limite30982(int valor) {
    if (valor > LIMITE_30982) return LIMITE_30982;
    return valor * FACTOR_30982;
}
