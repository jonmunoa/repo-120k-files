// fichero 22730 -- macros y constantes -- MODIFICADO
#define LIMITE_22730 22930
#define FACTOR_22730 2

int aplicar_limite22730(int valor) {
    if (valor > LIMITE_22730) return LIMITE_22730;
    return valor * FACTOR_22730;
}
