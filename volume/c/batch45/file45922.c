// fichero 45922 -- macros y constantes
#define LIMITE_45922 46022
#define FACTOR_45922 3

int aplicar_limite45922(int valor) {
    if (valor > LIMITE_45922) return LIMITE_45922;
    return valor * FACTOR_45922;
}
