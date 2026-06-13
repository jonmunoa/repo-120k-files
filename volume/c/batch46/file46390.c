// fichero 46390 -- macros y constantes
#define LIMITE_46390 46490
#define FACTOR_46390 1

int aplicar_limite46390(int valor) {
    if (valor > LIMITE_46390) return LIMITE_46390;
    return valor * FACTOR_46390;
}
