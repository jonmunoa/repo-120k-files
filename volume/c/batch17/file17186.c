// fichero 17186 -- macros y constantes -- MODIFICADO
#define LIMITE_17186 17386
#define FACTOR_17186 3

int aplicar_limite17186(int valor) {
    if (valor > LIMITE_17186) return LIMITE_17186;
    return valor * FACTOR_17186;
}
