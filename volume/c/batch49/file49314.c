// fichero 49314 -- macros y constantes -- MODIFICADO
#define LIMITE_49314 49514
#define FACTOR_49314 6

int aplicar_limite49314(int valor) {
    if (valor > LIMITE_49314) return LIMITE_49314;
    return valor * FACTOR_49314;
}
