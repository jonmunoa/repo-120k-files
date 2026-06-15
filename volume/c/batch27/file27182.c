// fichero 27182 -- macros y constantes -- MODIFICADO
#define LIMITE_27182 27382
#define FACTOR_27182 4

int aplicar_limite27182(int valor) {
    if (valor > LIMITE_27182) return LIMITE_27182;
    return valor * FACTOR_27182;
}
