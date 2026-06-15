// fichero 27270 -- macros y constantes -- MODIFICADO
#define LIMITE_27270 27470
#define FACTOR_27270 2

int aplicar_limite27270(int valor) {
    if (valor > LIMITE_27270) return LIMITE_27270;
    return valor * FACTOR_27270;
}
