// fichero 49922 -- macros y constantes
#define LIMITE_49922 50022
#define FACTOR_49922 3

int aplicar_limite49922(int valor) {
    if (valor > LIMITE_49922) return LIMITE_49922;
    return valor * FACTOR_49922;
}
