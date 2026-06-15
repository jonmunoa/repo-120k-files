// fichero 21166 -- macros y constantes -- MODIFICADO
#define LIMITE_21166 21366
#define FACTOR_21166 3

int aplicar_limite21166(int valor) {
    if (valor > LIMITE_21166) return LIMITE_21166;
    return valor * FACTOR_21166;
}
