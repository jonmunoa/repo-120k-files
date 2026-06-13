// fichero 54390 -- macros y constantes
#define LIMITE_54390 54490
#define FACTOR_54390 1

int aplicar_limite54390(int valor) {
    if (valor > LIMITE_54390) return LIMITE_54390;
    return valor * FACTOR_54390;
}
