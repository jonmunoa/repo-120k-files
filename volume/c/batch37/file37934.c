// fichero 37934 -- macros y constantes
#define LIMITE_37934 38034
#define FACTOR_37934 5

int aplicar_limite37934(int valor) {
    if (valor > LIMITE_37934) return LIMITE_37934;
    return valor * FACTOR_37934;
}
