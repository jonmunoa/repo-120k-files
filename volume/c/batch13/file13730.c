// fichero 13730 -- macros y constantes -- MODIFICADO
#define LIMITE_13730 13930
#define FACTOR_13730 2

int aplicar_limite13730(int valor) {
    if (valor > LIMITE_13730) return LIMITE_13730;
    return valor * FACTOR_13730;
}
