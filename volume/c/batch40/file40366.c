// fichero 40366 -- macros y constantes
#define LIMITE_40366 40466
#define FACTOR_40366 2

int aplicar_limite40366(int valor) {
    if (valor > LIMITE_40366) return LIMITE_40366;
    return valor * FACTOR_40366;
}
