// fichero 36210 -- macros y constantes -- MODIFICADO
#define LIMITE_36210 36410
#define FACTOR_36210 2

int aplicar_limite36210(int valor) {
    if (valor > LIMITE_36210) return LIMITE_36210;
    return valor * FACTOR_36210;
}
