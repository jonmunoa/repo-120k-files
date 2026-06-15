// fichero 41922 -- macros y constantes -- MODIFICADO
#define LIMITE_41922 42122
#define FACTOR_41922 4

int aplicar_limite41922(int valor) {
    if (valor > LIMITE_41922) return LIMITE_41922;
    return valor * FACTOR_41922;
}
