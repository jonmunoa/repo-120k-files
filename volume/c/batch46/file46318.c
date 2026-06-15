// fichero 46318 -- macros y constantes -- MODIFICADO
#define LIMITE_46318 46518
#define FACTOR_46318 5

int aplicar_limite46318(int valor) {
    if (valor > LIMITE_46318) return LIMITE_46318;
    return valor * FACTOR_46318;
}
