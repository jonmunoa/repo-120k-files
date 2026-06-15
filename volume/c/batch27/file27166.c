// fichero 27166 -- macros y constantes -- MODIFICADO
#define LIMITE_27166 27366
#define FACTOR_27166 3

int aplicar_limite27166(int valor) {
    if (valor > LIMITE_27166) return LIMITE_27166;
    return valor * FACTOR_27166;
}
