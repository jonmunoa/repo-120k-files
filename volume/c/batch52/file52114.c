// fichero 52114 -- macros y constantes
#define LIMITE_52114 52214
#define FACTOR_52114 5

int aplicar_limite52114(int valor) {
    if (valor > LIMITE_52114) return LIMITE_52114;
    return valor * FACTOR_52114;
}
