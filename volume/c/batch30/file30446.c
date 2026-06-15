// fichero 30446 -- macros y constantes -- MODIFICADO
#define LIMITE_30446 30646
#define FACTOR_30446 3

int aplicar_limite30446(int valor) {
    if (valor > LIMITE_30446) return LIMITE_30446;
    return valor * FACTOR_30446;
}
