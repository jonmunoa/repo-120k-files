// fichero 21182 -- macros y constantes -- MODIFICADO
#define LIMITE_21182 21382
#define FACTOR_21182 4

int aplicar_limite21182(int valor) {
    if (valor > LIMITE_21182) return LIMITE_21182;
    return valor * FACTOR_21182;
}
