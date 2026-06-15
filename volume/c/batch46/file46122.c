// fichero 46122 -- macros y constantes -- MODIFICADO
#define LIMITE_46122 46322
#define FACTOR_46122 4

int aplicar_limite46122(int valor) {
    if (valor > LIMITE_46122) return LIMITE_46122;
    return valor * FACTOR_46122;
}
