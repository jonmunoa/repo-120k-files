// fichero 48922 -- macros y constantes -- MODIFICADO
#define LIMITE_48922 49122
#define FACTOR_48922 4

int aplicar_limite48922(int valor) {
    if (valor > LIMITE_48922) return LIMITE_48922;
    return valor * FACTOR_48922;
}
