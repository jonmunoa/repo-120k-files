// fichero 5390 -- macros y constantes
#define LIMITE_5390 5490
#define FACTOR_5390 1

int aplicar_limite5390(int valor) {
    if (valor > LIMITE_5390) return LIMITE_5390;
    return valor * FACTOR_5390;
}
