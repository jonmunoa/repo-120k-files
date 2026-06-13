// fichero 6302 -- macros y constantes
#define LIMITE_6302 6402
#define FACTOR_6302 3

int aplicar_limite6302(int valor) {
    if (valor > LIMITE_6302) return LIMITE_6302;
    return valor * FACTOR_6302;
}
