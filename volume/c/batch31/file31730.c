// fichero 31730 -- macros y constantes -- MODIFICADO
#define LIMITE_31730 31930
#define FACTOR_31730 2

int aplicar_limite31730(int valor) {
    if (valor > LIMITE_31730) return LIMITE_31730;
    return valor * FACTOR_31730;
}
