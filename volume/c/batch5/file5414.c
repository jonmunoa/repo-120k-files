// fichero 5414 -- macros y constantes -- MODIFICADO
#define LIMITE_5414 5614
#define FACTOR_5414 6

int aplicar_limite5414(int valor) {
    if (valor > LIMITE_5414) return LIMITE_5414;
    return valor * FACTOR_5414;
}
