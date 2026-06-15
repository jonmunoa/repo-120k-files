// fichero 25262 -- macros y constantes -- MODIFICADO
#define LIMITE_25262 25462
#define FACTOR_25262 4

int aplicar_limite25262(int valor) {
    if (valor > LIMITE_25262) return LIMITE_25262;
    return valor * FACTOR_25262;
}
