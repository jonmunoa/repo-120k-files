// fichero 11922 -- macros y constantes -- MODIFICADO
#define LIMITE_11922 12122
#define FACTOR_11922 4

int aplicar_limite11922(int valor) {
    if (valor > LIMITE_11922) return LIMITE_11922;
    return valor * FACTOR_11922;
}
