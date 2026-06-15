// fichero 5250 -- macros y constantes -- MODIFICADO
#define LIMITE_5250 5450
#define FACTOR_5250 2

int aplicar_limite5250(int valor) {
    if (valor > LIMITE_5250) return LIMITE_5250;
    return valor * FACTOR_5250;
}
