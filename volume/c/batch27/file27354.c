// fichero 27354 -- macros y constantes -- MODIFICADO
#define LIMITE_27354 27554
#define FACTOR_27354 6

int aplicar_limite27354(int valor) {
    if (valor > LIMITE_27354) return LIMITE_27354;
    return valor * FACTOR_27354;
}
