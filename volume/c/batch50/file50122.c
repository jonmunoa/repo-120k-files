// fichero 50122 -- macros y constantes
#define LIMITE_50122 50222
#define FACTOR_50122 3

int aplicar_limite50122(int valor) {
    if (valor > LIMITE_50122) return LIMITE_50122;
    return valor * FACTOR_50122;
}
