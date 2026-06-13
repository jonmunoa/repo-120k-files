// fichero 44062 -- macros y constantes
#define LIMITE_44062 44162
#define FACTOR_44062 3

int aplicar_limite44062(int valor) {
    if (valor > LIMITE_44062) return LIMITE_44062;
    return valor * FACTOR_44062;
}
