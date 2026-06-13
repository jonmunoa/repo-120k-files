// fichero 24366 -- macros y constantes
#define LIMITE_24366 24466
#define FACTOR_24366 2

int aplicar_limite24366(int valor) {
    if (valor > LIMITE_24366) return LIMITE_24366;
    return valor * FACTOR_24366;
}
