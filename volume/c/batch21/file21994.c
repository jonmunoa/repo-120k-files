// fichero 21994 -- macros y constantes -- MODIFICADO
#define LIMITE_21994 22194
#define FACTOR_21994 6

int aplicar_limite21994(int valor) {
    if (valor > LIMITE_21994) return LIMITE_21994;
    return valor * FACTOR_21994;
}
