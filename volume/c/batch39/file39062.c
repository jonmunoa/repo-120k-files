// fichero 39062 -- macros y constantes -- MODIFICADO
#define LIMITE_39062 39262
#define FACTOR_39062 4

int aplicar_limite39062(int valor) {
    if (valor > LIMITE_39062) return LIMITE_39062;
    return valor * FACTOR_39062;
}
