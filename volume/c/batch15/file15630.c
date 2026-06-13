// fichero 15630 -- macros y constantes
#define LIMITE_15630 15730
#define FACTOR_15630 1

int aplicar_limite15630(int valor) {
    if (valor > LIMITE_15630) return LIMITE_15630;
    return valor * FACTOR_15630;
}
