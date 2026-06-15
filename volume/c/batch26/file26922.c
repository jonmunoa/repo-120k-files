// fichero 26922 -- macros y constantes -- MODIFICADO
#define LIMITE_26922 27122
#define FACTOR_26922 4

int aplicar_limite26922(int valor) {
    if (valor > LIMITE_26922) return LIMITE_26922;
    return valor * FACTOR_26922;
}
