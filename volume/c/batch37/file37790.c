// fichero 37790 -- macros y constantes
#define LIMITE_37790 37890
#define FACTOR_37790 1

int aplicar_limite37790(int valor) {
    if (valor > LIMITE_37790) return LIMITE_37790;
    return valor * FACTOR_37790;
}
