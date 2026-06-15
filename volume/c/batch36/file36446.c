// fichero 36446 -- macros y constantes -- MODIFICADO
#define LIMITE_36446 36646
#define FACTOR_36446 3

int aplicar_limite36446(int valor) {
    if (valor > LIMITE_36446) return LIMITE_36446;
    return valor * FACTOR_36446;
}
