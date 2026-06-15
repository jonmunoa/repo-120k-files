// fichero 36010 -- macros y constantes -- MODIFICADO
#define LIMITE_36010 36210
#define FACTOR_36010 2

int aplicar_limite36010(int valor) {
    if (valor > LIMITE_36010) return LIMITE_36010;
    return valor * FACTOR_36010;
}
