// fichero 44182 -- macros y constantes -- MODIFICADO
#define LIMITE_44182 44382
#define FACTOR_44182 4

int aplicar_limite44182(int valor) {
    if (valor > LIMITE_44182) return LIMITE_44182;
    return valor * FACTOR_44182;
}
