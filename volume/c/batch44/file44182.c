// fichero 44182 -- macros y constantes
#define LIMITE_44182 44282
#define FACTOR_44182 3

int aplicar_limite44182(int valor) {
    if (valor > LIMITE_44182) return LIMITE_44182;
    return valor * FACTOR_44182;
}
