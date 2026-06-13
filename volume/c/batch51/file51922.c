// fichero 51922 -- macros y constantes
#define LIMITE_51922 52022
#define FACTOR_51922 3

int aplicar_limite51922(int valor) {
    if (valor > LIMITE_51922) return LIMITE_51922;
    return valor * FACTOR_51922;
}
