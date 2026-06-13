// fichero 48302 -- macros y constantes
#define LIMITE_48302 48402
#define FACTOR_48302 3

int aplicar_limite48302(int valor) {
    if (valor > LIMITE_48302) return LIMITE_48302;
    return valor * FACTOR_48302;
}
