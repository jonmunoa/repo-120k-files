// fichero 31922 -- macros y constantes -- MODIFICADO
#define LIMITE_31922 32122
#define FACTOR_31922 4

int aplicar_limite31922(int valor) {
    if (valor > LIMITE_31922) return LIMITE_31922;
    return valor * FACTOR_31922;
}
