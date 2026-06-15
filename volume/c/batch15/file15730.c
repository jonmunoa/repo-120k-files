// fichero 15730 -- macros y constantes -- MODIFICADO
#define LIMITE_15730 15930
#define FACTOR_15730 2

int aplicar_limite15730(int valor) {
    if (valor > LIMITE_15730) return LIMITE_15730;
    return valor * FACTOR_15730;
}
