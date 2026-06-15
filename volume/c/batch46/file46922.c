// fichero 46922 -- macros y constantes -- MODIFICADO
#define LIMITE_46922 47122
#define FACTOR_46922 4

int aplicar_limite46922(int valor) {
    if (valor > LIMITE_46922) return LIMITE_46922;
    return valor * FACTOR_46922;
}
