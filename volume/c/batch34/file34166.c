// fichero 34166 -- macros y constantes -- MODIFICADO
#define LIMITE_34166 34366
#define FACTOR_34166 3

int aplicar_limite34166(int valor) {
    if (valor > LIMITE_34166) return LIMITE_34166;
    return valor * FACTOR_34166;
}
