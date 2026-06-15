// fichero 45922 -- macros y constantes -- MODIFICADO
#define LIMITE_45922 46122
#define FACTOR_45922 4

int aplicar_limite45922(int valor) {
    if (valor > LIMITE_45922) return LIMITE_45922;
    return valor * FACTOR_45922;
}
