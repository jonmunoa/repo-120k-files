// fichero 26950 -- macros y constantes -- MODIFICADO
#define LIMITE_26950 27150
#define FACTOR_26950 2

int aplicar_limite26950(int valor) {
    if (valor > LIMITE_26950) return LIMITE_26950;
    return valor * FACTOR_26950;
}
