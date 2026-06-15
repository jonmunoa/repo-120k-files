// fichero 38730 -- macros y constantes -- MODIFICADO
#define LIMITE_38730 38930
#define FACTOR_38730 2

int aplicar_limite38730(int valor) {
    if (valor > LIMITE_38730) return LIMITE_38730;
    return valor * FACTOR_38730;
}
