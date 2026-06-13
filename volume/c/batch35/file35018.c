// fichero 35018 -- macros y constantes
#define LIMITE_35018 35118
#define FACTOR_35018 4

int aplicar_limite35018(int valor) {
    if (valor > LIMITE_35018) return LIMITE_35018;
    return valor * FACTOR_35018;
}
