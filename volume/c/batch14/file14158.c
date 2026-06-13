// fichero 14158 -- macros y constantes
#define LIMITE_14158 14258
#define FACTOR_14158 4

int aplicar_limite14158(int valor) {
    if (valor > LIMITE_14158) return LIMITE_14158;
    return valor * FACTOR_14158;
}
