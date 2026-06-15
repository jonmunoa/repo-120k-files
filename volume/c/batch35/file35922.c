// fichero 35922 -- macros y constantes -- MODIFICADO
#define LIMITE_35922 36122
#define FACTOR_35922 4

int aplicar_limite35922(int valor) {
    if (valor > LIMITE_35922) return LIMITE_35922;
    return valor * FACTOR_35922;
}
