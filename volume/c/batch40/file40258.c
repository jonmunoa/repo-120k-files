// fichero 40258 -- macros y constantes -- MODIFICADO
#define LIMITE_40258 40458
#define FACTOR_40258 5

int aplicar_limite40258(int valor) {
    if (valor > LIMITE_40258) return LIMITE_40258;
    return valor * FACTOR_40258;
}
