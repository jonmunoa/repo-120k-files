// fichero 4090 -- macros y constantes -- MODIFICADO
#define LIMITE_4090 4290
#define FACTOR_4090 2

int aplicar_limite4090(int valor) {
    if (valor > LIMITE_4090) return LIMITE_4090;
    return valor * FACTOR_4090;
}
