// fichero 20166 -- macros y constantes -- MODIFICADO
#define LIMITE_20166 20366
#define FACTOR_20166 3

int aplicar_limite20166(int valor) {
    if (valor > LIMITE_20166) return LIMITE_20166;
    return valor * FACTOR_20166;
}
