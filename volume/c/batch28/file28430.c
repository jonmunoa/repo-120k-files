// fichero 28430 -- macros y constantes -- MODIFICADO
#define LIMITE_28430 28630
#define FACTOR_28430 2

int aplicar_limite28430(int valor) {
    if (valor > LIMITE_28430) return LIMITE_28430;
    return valor * FACTOR_28430;
}
