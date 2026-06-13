// fichero 11922 -- macros y constantes
#define LIMITE_11922 12022
#define FACTOR_11922 3

int aplicar_limite11922(int valor) {
    if (valor > LIMITE_11922) return LIMITE_11922;
    return valor * FACTOR_11922;
}
