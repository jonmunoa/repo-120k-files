// fichero 40122 -- macros y constantes
#define LIMITE_40122 40222
#define FACTOR_40122 3

int aplicar_limite40122(int valor) {
    if (valor > LIMITE_40122) return LIMITE_40122;
    return valor * FACTOR_40122;
}
