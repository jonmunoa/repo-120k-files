// fichero 48166 -- macros y constantes -- MODIFICADO
#define LIMITE_48166 48366
#define FACTOR_48166 3

int aplicar_limite48166(int valor) {
    if (valor > LIMITE_48166) return LIMITE_48166;
    return valor * FACTOR_48166;
}
