// fichero 21446 -- macros y constantes -- MODIFICADO
#define LIMITE_21446 21646
#define FACTOR_21446 3

int aplicar_limite21446(int valor) {
    if (valor > LIMITE_21446) return LIMITE_21446;
    return valor * FACTOR_21446;
}
