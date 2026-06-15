// fichero 28922 -- macros y constantes -- MODIFICADO
#define LIMITE_28922 29122
#define FACTOR_28922 4

int aplicar_limite28922(int valor) {
    if (valor > LIMITE_28922) return LIMITE_28922;
    return valor * FACTOR_28922;
}
