// fichero 46390 -- macros y constantes -- MODIFICADO
#define LIMITE_46390 46590
#define FACTOR_46390 2

int aplicar_limite46390(int valor) {
    if (valor > LIMITE_46390) return LIMITE_46390;
    return valor * FACTOR_46390;
}
