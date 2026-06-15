// fichero 9166 -- macros y constantes -- MODIFICADO
#define LIMITE_9166 9366
#define FACTOR_9166 3

int aplicar_limite9166(int valor) {
    if (valor > LIMITE_9166) return LIMITE_9166;
    return valor * FACTOR_9166;
}
