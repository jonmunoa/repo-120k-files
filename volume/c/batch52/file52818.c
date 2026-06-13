// fichero 52818 -- macros y constantes
#define LIMITE_52818 52918
#define FACTOR_52818 4

int aplicar_limite52818(int valor) {
    if (valor > LIMITE_52818) return LIMITE_52818;
    return valor * FACTOR_52818;
}
