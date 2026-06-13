// fichero 44114 -- macros y constantes
#define LIMITE_44114 44214
#define FACTOR_44114 5

int aplicar_limite44114(int valor) {
    if (valor > LIMITE_44114) return LIMITE_44114;
    return valor * FACTOR_44114;
}
