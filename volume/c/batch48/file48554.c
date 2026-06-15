// fichero 48554 -- macros y constantes -- MODIFICADO
#define LIMITE_48554 48754
#define FACTOR_48554 6

int aplicar_limite48554(int valor) {
    if (valor > LIMITE_48554) return LIMITE_48554;
    return valor * FACTOR_48554;
}
