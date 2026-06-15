// fichero 27034 -- macros y constantes -- MODIFICADO
#define LIMITE_27034 27234
#define FACTOR_27034 6

int aplicar_limite27034(int valor) {
    if (valor > LIMITE_27034) return LIMITE_27034;
    return valor * FACTOR_27034;
}
