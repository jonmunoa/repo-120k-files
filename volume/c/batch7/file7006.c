// fichero 7006 -- macros y constantes -- MODIFICADO
#define LIMITE_7006 7206
#define FACTOR_7006 3

int aplicar_limite7006(int valor) {
    if (valor > LIMITE_7006) return LIMITE_7006;
    return valor * FACTOR_7006;
}
