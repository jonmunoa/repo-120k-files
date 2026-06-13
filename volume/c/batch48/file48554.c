// fichero 48554 -- macros y constantes
#define LIMITE_48554 48654
#define FACTOR_48554 5

int aplicar_limite48554(int valor) {
    if (valor > LIMITE_48554) return LIMITE_48554;
    return valor * FACTOR_48554;
}
