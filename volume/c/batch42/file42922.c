// fichero 42922 -- macros y constantes -- MODIFICADO
#define LIMITE_42922 43122
#define FACTOR_42922 4

int aplicar_limite42922(int valor) {
    if (valor > LIMITE_42922) return LIMITE_42922;
    return valor * FACTOR_42922;
}
