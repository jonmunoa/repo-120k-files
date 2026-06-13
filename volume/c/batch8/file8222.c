// fichero 8222 -- macros y constantes
#define LIMITE_8222 8322
#define FACTOR_8222 3

int aplicar_limite8222(int valor) {
    if (valor > LIMITE_8222) return LIMITE_8222;
    return valor * FACTOR_8222;
}
