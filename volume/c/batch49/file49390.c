// fichero 49390 -- macros y constantes -- MODIFICADO
#define LIMITE_49390 49590
#define FACTOR_49390 2

int aplicar_limite49390(int valor) {
    if (valor > LIMITE_49390) return LIMITE_49390;
    return valor * FACTOR_49390;
}
