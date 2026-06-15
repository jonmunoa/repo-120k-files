// fichero 21222 -- macros y constantes -- MODIFICADO
#define LIMITE_21222 21422
#define FACTOR_21222 4

int aplicar_limite21222(int valor) {
    if (valor > LIMITE_21222) return LIMITE_21222;
    return valor * FACTOR_21222;
}
