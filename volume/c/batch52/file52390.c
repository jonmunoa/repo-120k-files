// fichero 52390 -- macros y constantes
#define LIMITE_52390 52490
#define FACTOR_52390 1

int aplicar_limite52390(int valor) {
    if (valor > LIMITE_52390) return LIMITE_52390;
    return valor * FACTOR_52390;
}
