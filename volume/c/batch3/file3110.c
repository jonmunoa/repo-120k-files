// fichero 3110 -- macros y constantes -- MODIFICADO
#define LIMITE_3110 3310
#define FACTOR_3110 2

int aplicar_limite3110(int valor) {
    if (valor > LIMITE_3110) return LIMITE_3110;
    return valor * FACTOR_3110;
}
