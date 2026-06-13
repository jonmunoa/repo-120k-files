// fichero 20158 -- macros y constantes
#define LIMITE_20158 20258
#define FACTOR_20158 4

int aplicar_limite20158(int valor) {
    if (valor > LIMITE_20158) return LIMITE_20158;
    return valor * FACTOR_20158;
}
