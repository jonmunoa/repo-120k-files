// fichero 41922 -- macros y constantes
#define LIMITE_41922 42022
#define FACTOR_41922 3

int aplicar_limite41922(int valor) {
    if (valor > LIMITE_41922) return LIMITE_41922;
    return valor * FACTOR_41922;
}
