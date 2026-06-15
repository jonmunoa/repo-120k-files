// fichero 166 -- macros y constantes -- MODIFICADO
#define LIMITE_166 366
#define FACTOR_166 3

int aplicar_limite166(int valor) {
    if (valor > LIMITE_166) return LIMITE_166;
    return valor * FACTOR_166;
}
