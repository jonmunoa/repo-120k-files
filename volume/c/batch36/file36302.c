// fichero 36302 -- macros y constantes -- MODIFICADO
#define LIMITE_36302 36502
#define FACTOR_36302 4

int aplicar_limite36302(int valor) {
    if (valor > LIMITE_36302) return LIMITE_36302;
    return valor * FACTOR_36302;
}
