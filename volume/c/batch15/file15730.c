// fichero 15730 -- macros y constantes
#define LIMITE_15730 15830
#define FACTOR_15730 1

int aplicar_limite15730(int valor) {
    if (valor > LIMITE_15730) return LIMITE_15730;
    return valor * FACTOR_15730;
}
