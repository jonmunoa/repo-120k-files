// fichero 7446 -- macros y constantes -- MODIFICADO
#define LIMITE_7446 7646
#define FACTOR_7446 3

int aplicar_limite7446(int valor) {
    if (valor > LIMITE_7446) return LIMITE_7446;
    return valor * FACTOR_7446;
}
