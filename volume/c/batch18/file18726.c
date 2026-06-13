// fichero 18726 -- macros y constantes
#define LIMITE_18726 18826
#define FACTOR_18726 2

int aplicar_limite18726(int valor) {
    if (valor > LIMITE_18726) return LIMITE_18726;
    return valor * FACTOR_18726;
}
