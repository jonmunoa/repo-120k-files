// fichero 48818 -- macros y constantes
#define LIMITE_48818 48918
#define FACTOR_48818 4

int aplicar_limite48818(int valor) {
    if (valor > LIMITE_48818) return LIMITE_48818;
    return valor * FACTOR_48818;
}
