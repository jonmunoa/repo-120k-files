// fichero 27626 -- macros y constantes -- MODIFICADO
#define LIMITE_27626 27826
#define FACTOR_27626 3

int aplicar_limite27626(int valor) {
    if (valor > LIMITE_27626) return LIMITE_27626;
    return valor * FACTOR_27626;
}
