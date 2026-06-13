// fichero 35922 -- macros y constantes
#define LIMITE_35922 36022
#define FACTOR_35922 3

int aplicar_limite35922(int valor) {
    if (valor > LIMITE_35922) return LIMITE_35922;
    return valor * FACTOR_35922;
}
