// fichero 30018 -- macros y constantes -- MODIFICADO
#define LIMITE_30018 30218
#define FACTOR_30018 5

int aplicar_limite30018(int valor) {
    if (valor > LIMITE_30018) return LIMITE_30018;
    return valor * FACTOR_30018;
}
