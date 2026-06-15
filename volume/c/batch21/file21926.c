// fichero 21926 -- macros y constantes -- MODIFICADO
#define LIMITE_21926 22126
#define FACTOR_21926 3

int aplicar_limite21926(int valor) {
    if (valor > LIMITE_21926) return LIMITE_21926;
    return valor * FACTOR_21926;
}
