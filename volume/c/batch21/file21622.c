// fichero 21622 -- macros y constantes -- MODIFICADO
#define LIMITE_21622 21822
#define FACTOR_21622 4

int aplicar_limite21622(int valor) {
    if (valor > LIMITE_21622) return LIMITE_21622;
    return valor * FACTOR_21622;
}
