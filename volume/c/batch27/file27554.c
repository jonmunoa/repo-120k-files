// fichero 27554 -- macros y constantes -- MODIFICADO
#define LIMITE_27554 27754
#define FACTOR_27554 6

int aplicar_limite27554(int valor) {
    if (valor > LIMITE_27554) return LIMITE_27554;
    return valor * FACTOR_27554;
}
