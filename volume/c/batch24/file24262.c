// fichero 24262 -- macros y constantes
#define LIMITE_24262 24362
#define FACTOR_24262 3

int aplicar_limite24262(int valor) {
    if (valor > LIMITE_24262) return LIMITE_24262;
    return valor * FACTOR_24262;
}
