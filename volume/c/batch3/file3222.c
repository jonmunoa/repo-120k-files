// fichero 3222 -- macros y constantes -- MODIFICADO
#define LIMITE_3222 3422
#define FACTOR_3222 4

int aplicar_limite3222(int valor) {
    if (valor > LIMITE_3222) return LIMITE_3222;
    return valor * FACTOR_3222;
}
