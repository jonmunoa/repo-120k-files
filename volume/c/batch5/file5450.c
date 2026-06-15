// fichero 5450 -- macros y constantes -- MODIFICADO
#define LIMITE_5450 5650
#define FACTOR_5450 2

int aplicar_limite5450(int valor) {
    if (valor > LIMITE_5450) return LIMITE_5450;
    return valor * FACTOR_5450;
}
