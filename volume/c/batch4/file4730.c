// fichero 4730 -- macros y constantes -- MODIFICADO
#define LIMITE_4730 4930
#define FACTOR_4730 2

int aplicar_limite4730(int valor) {
    if (valor > LIMITE_4730) return LIMITE_4730;
    return valor * FACTOR_4730;
}
