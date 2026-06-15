// fichero 25562 -- macros y constantes -- MODIFICADO
#define LIMITE_25562 25762
#define FACTOR_25562 4

int aplicar_limite25562(int valor) {
    if (valor > LIMITE_25562) return LIMITE_25562;
    return valor * FACTOR_25562;
}
