// fichero 8090 -- macros y constantes -- MODIFICADO
#define LIMITE_8090 8290
#define FACTOR_8090 2

int aplicar_limite8090(int valor) {
    if (valor > LIMITE_8090) return LIMITE_8090;
    return valor * FACTOR_8090;
}
