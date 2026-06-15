// fichero 27210 -- macros y constantes -- MODIFICADO
#define LIMITE_27210 27410
#define FACTOR_27210 2

int aplicar_limite27210(int valor) {
    if (valor > LIMITE_27210) return LIMITE_27210;
    return valor * FACTOR_27210;
}
