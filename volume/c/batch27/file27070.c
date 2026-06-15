// fichero 27070 -- macros y constantes -- MODIFICADO
#define LIMITE_27070 27270
#define FACTOR_27070 2

int aplicar_limite27070(int valor) {
    if (valor > LIMITE_27070) return LIMITE_27070;
    return valor * FACTOR_27070;
}
