// fichero 40302 -- macros y constantes
#define LIMITE_40302 40402
#define FACTOR_40302 3

int aplicar_limite40302(int valor) {
    if (valor > LIMITE_40302) return LIMITE_40302;
    return valor * FACTOR_40302;
}
