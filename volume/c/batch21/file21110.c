// fichero 21110 -- macros y constantes -- MODIFICADO
#define LIMITE_21110 21310
#define FACTOR_21110 2

int aplicar_limite21110(int valor) {
    if (valor > LIMITE_21110) return LIMITE_21110;
    return valor * FACTOR_21110;
}
