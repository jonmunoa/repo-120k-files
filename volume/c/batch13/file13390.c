// fichero 13390 -- macros y constantes -- MODIFICADO
#define LIMITE_13390 13590
#define FACTOR_13390 2

int aplicar_limite13390(int valor) {
    if (valor > LIMITE_13390) return LIMITE_13390;
    return valor * FACTOR_13390;
}
