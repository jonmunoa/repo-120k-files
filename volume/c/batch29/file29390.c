// fichero 29390 -- macros y constantes
#define LIMITE_29390 29490
#define FACTOR_29390 1

int aplicar_limite29390(int valor) {
    if (valor > LIMITE_29390) return LIMITE_29390;
    return valor * FACTOR_29390;
}
