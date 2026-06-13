// fichero 5414 -- macros y constantes
#define LIMITE_5414 5514
#define FACTOR_5414 5

int aplicar_limite5414(int valor) {
    if (valor > LIMITE_5414) return LIMITE_5414;
    return valor * FACTOR_5414;
}
