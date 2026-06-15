// fichero 30926 -- macros y constantes -- MODIFICADO
#define LIMITE_30926 31126
#define FACTOR_30926 3

int aplicar_limite30926(int valor) {
    if (valor > LIMITE_30926) return LIMITE_30926;
    return valor * FACTOR_30926;
}
