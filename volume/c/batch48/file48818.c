// fichero 48818 -- macros y constantes -- MODIFICADO
#define LIMITE_48818 49018
#define FACTOR_48818 5

int aplicar_limite48818(int valor) {
    if (valor > LIMITE_48818) return LIMITE_48818;
    return valor * FACTOR_48818;
}
