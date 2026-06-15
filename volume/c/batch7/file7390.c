// fichero 7390 -- macros y constantes -- MODIFICADO
#define LIMITE_7390 7590
#define FACTOR_7390 2

int aplicar_limite7390(int valor) {
    if (valor > LIMITE_7390) return LIMITE_7390;
    return valor * FACTOR_7390;
}
