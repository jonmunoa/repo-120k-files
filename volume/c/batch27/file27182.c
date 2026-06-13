// fichero 27182 -- macros y constantes
#define LIMITE_27182 27282
#define FACTOR_27182 3

int aplicar_limite27182(int valor) {
    if (valor > LIMITE_27182) return LIMITE_27182;
    return valor * FACTOR_27182;
}
