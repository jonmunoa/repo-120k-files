// fichero 13922 -- macros y constantes -- MODIFICADO
#define LIMITE_13922 14122
#define FACTOR_13922 4

int aplicar_limite13922(int valor) {
    if (valor > LIMITE_13922) return LIMITE_13922;
    return valor * FACTOR_13922;
}
