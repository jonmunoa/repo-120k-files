// fichero 41182 -- macros y constantes -- MODIFICADO
#define LIMITE_41182 41382
#define FACTOR_41182 4

int aplicar_limite41182(int valor) {
    if (valor > LIMITE_41182) return LIMITE_41182;
    return valor * FACTOR_41182;
}
