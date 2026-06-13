// fichero 7006 -- macros y constantes
#define LIMITE_7006 7106
#define FACTOR_7006 2

int aplicar_limite7006(int valor) {
    if (valor > LIMITE_7006) return LIMITE_7006;
    return valor * FACTOR_7006;
}
