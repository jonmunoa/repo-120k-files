// fichero 15726 -- macros y constantes
#define LIMITE_15726 15826
#define FACTOR_15726 2

int aplicar_limite15726(int valor) {
    if (valor > LIMITE_15726) return LIMITE_15726;
    return valor * FACTOR_15726;
}
