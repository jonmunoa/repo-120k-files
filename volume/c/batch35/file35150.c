// fichero 35150 -- macros y constantes
#define LIMITE_35150 35250
#define FACTOR_35150 1

int aplicar_limite35150(int valor) {
    if (valor > LIMITE_35150) return LIMITE_35150;
    return valor * FACTOR_35150;
}
