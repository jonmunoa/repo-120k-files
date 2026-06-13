// fichero 24210 -- macros y constantes
#define LIMITE_24210 24310
#define FACTOR_24210 1

int aplicar_limite24210(int valor) {
    if (valor > LIMITE_24210) return LIMITE_24210;
    return valor * FACTOR_24210;
}
