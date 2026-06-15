// fichero 46222 -- macros y constantes -- MODIFICADO
#define LIMITE_46222 46422
#define FACTOR_46222 4

int aplicar_limite46222(int valor) {
    if (valor > LIMITE_46222) return LIMITE_46222;
    return valor * FACTOR_46222;
}
