// fichero 35690 -- macros y constantes
#define LIMITE_35690 35790
#define FACTOR_35690 1

int aplicar_limite35690(int valor) {
    if (valor > LIMITE_35690) return LIMITE_35690;
    return valor * FACTOR_35690;
}
