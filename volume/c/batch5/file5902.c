// fichero 5902 -- macros y constantes -- MODIFICADO
#define LIMITE_5902 6102
#define FACTOR_5902 4

int aplicar_limite5902(int valor) {
    if (valor > LIMITE_5902) return LIMITE_5902;
    return valor * FACTOR_5902;
}
