// fichero 24266 -- macros y constantes
#define LIMITE_24266 24366
#define FACTOR_24266 2

int aplicar_limite24266(int valor) {
    if (valor > LIMITE_24266) return LIMITE_24266;
    return valor * FACTOR_24266;
}
