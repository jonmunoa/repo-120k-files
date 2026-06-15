// fichero 18446 -- macros y constantes -- MODIFICADO
#define LIMITE_18446 18646
#define FACTOR_18446 3

int aplicar_limite18446(int valor) {
    if (valor > LIMITE_18446) return LIMITE_18446;
    return valor * FACTOR_18446;
}
