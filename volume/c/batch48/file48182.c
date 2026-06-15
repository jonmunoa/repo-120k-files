// fichero 48182 -- macros y constantes -- MODIFICADO
#define LIMITE_48182 48382
#define FACTOR_48182 4

int aplicar_limite48182(int valor) {
    if (valor > LIMITE_48182) return LIMITE_48182;
    return valor * FACTOR_48182;
}
