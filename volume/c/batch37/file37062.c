// fichero 37062 -- macros y constantes
#define LIMITE_37062 37162
#define FACTOR_37062 3

int aplicar_limite37062(int valor) {
    if (valor > LIMITE_37062) return LIMITE_37062;
    return valor * FACTOR_37062;
}
