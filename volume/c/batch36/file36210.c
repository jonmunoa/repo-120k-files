// fichero 36210 -- macros y constantes
#define LIMITE_36210 36310
#define FACTOR_36210 1

int aplicar_limite36210(int valor) {
    if (valor > LIMITE_36210) return LIMITE_36210;
    return valor * FACTOR_36210;
}
