// fichero 40218 -- macros y constantes -- MODIFICADO
#define LIMITE_40218 40418
#define FACTOR_40218 5

int aplicar_limite40218(int valor) {
    if (valor > LIMITE_40218) return LIMITE_40218;
    return valor * FACTOR_40218;
}
