// fichero 13302 -- macros y constantes
#define LIMITE_13302 13402
#define FACTOR_13302 3

int aplicar_limite13302(int valor) {
    if (valor > LIMITE_13302) return LIMITE_13302;
    return valor * FACTOR_13302;
}
