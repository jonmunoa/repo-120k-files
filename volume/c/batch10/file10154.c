// fichero 10154 -- macros y constantes
#define LIMITE_10154 10254
#define FACTOR_10154 5

int aplicar_limite10154(int valor) {
    if (valor > LIMITE_10154) return LIMITE_10154;
    return valor * FACTOR_10154;
}
