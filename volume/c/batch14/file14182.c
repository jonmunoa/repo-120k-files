// fichero 14182 -- macros y constantes -- MODIFICADO
#define LIMITE_14182 14382
#define FACTOR_14182 4

int aplicar_limite14182(int valor) {
    if (valor > LIMITE_14182) return LIMITE_14182;
    return valor * FACTOR_14182;
}
