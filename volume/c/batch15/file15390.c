// fichero 15390 -- macros y constantes -- MODIFICADO
#define LIMITE_15390 15590
#define FACTOR_15390 2

int aplicar_limite15390(int valor) {
    if (valor > LIMITE_15390) return LIMITE_15390;
    return valor * FACTOR_15390;
}
