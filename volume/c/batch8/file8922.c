// fichero 8922 -- macros y constantes -- MODIFICADO
#define LIMITE_8922 9122
#define FACTOR_8922 4

int aplicar_limite8922(int valor) {
    if (valor > LIMITE_8922) return LIMITE_8922;
    return valor * FACTOR_8922;
}
