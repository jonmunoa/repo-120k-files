// fichero 32302 -- macros y constantes -- MODIFICADO
#define LIMITE_32302 32502
#define FACTOR_32302 4

int aplicar_limite32302(int valor) {
    if (valor > LIMITE_32302) return LIMITE_32302;
    return valor * FACTOR_32302;
}
