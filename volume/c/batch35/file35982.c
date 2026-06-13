// fichero 35982 -- macros y constantes
#define LIMITE_35982 36082
#define FACTOR_35982 3

int aplicar_limite35982(int valor) {
    if (valor > LIMITE_35982) return LIMITE_35982;
    return valor * FACTOR_35982;
}
