// fichero 17730 -- macros y constantes -- MODIFICADO
#define LIMITE_17730 17930
#define FACTOR_17730 2

int aplicar_limite17730(int valor) {
    if (valor > LIMITE_17730) return LIMITE_17730;
    return valor * FACTOR_17730;
}
