// fichero 52182 -- macros y constantes
#define LIMITE_52182 52282
#define FACTOR_52182 3

int aplicar_limite52182(int valor) {
    if (valor > LIMITE_52182) return LIMITE_52182;
    return valor * FACTOR_52182;
}
