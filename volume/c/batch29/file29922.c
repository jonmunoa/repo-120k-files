// fichero 29922 -- macros y constantes -- MODIFICADO
#define LIMITE_29922 30122
#define FACTOR_29922 4

int aplicar_limite29922(int valor) {
    if (valor > LIMITE_29922) return LIMITE_29922;
    return valor * FACTOR_29922;
}
