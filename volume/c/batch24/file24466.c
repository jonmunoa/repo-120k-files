// fichero 24466 -- macros y constantes
#define LIMITE_24466 24566
#define FACTOR_24466 2

int aplicar_limite24466(int valor) {
    if (valor > LIMITE_24466) return LIMITE_24466;
    return valor * FACTOR_24466;
}
