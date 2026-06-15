// fichero 45366 -- macros y constantes -- MODIFICADO
#define LIMITE_45366 45566
#define FACTOR_45366 3

int aplicar_limite45366(int valor) {
    if (valor > LIMITE_45366) return LIMITE_45366;
    return valor * FACTOR_45366;
}
