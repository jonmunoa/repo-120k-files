// fichero 30218 -- macros y constantes -- MODIFICADO
#define LIMITE_30218 30418
#define FACTOR_30218 5

int aplicar_limite30218(int valor) {
    if (valor > LIMITE_30218) return LIMITE_30218;
    return valor * FACTOR_30218;
}
