// fichero 46926 -- macros y constantes -- MODIFICADO
#define LIMITE_46926 47126
#define FACTOR_46926 3

int aplicar_limite46926(int valor) {
    if (valor > LIMITE_46926) return LIMITE_46926;
    return valor * FACTOR_46926;
}
