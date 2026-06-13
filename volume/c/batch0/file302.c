// fichero 302 -- macros y constantes
#define LIMITE_302 402
#define FACTOR_302 3

int aplicar_limite302(int valor) {
    if (valor > LIMITE_302) return LIMITE_302;
    return valor * FACTOR_302;
}
