// fichero 31526 -- macros y constantes -- MODIFICADO
#define LIMITE_31526 31726
#define FACTOR_31526 3

int aplicar_limite31526(int valor) {
    if (valor > LIMITE_31526) return LIMITE_31526;
    return valor * FACTOR_31526;
}
