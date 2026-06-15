// fichero 37302 -- macros y constantes -- MODIFICADO
#define LIMITE_37302 37502
#define FACTOR_37302 4

int aplicar_limite37302(int valor) {
    if (valor > LIMITE_37302) return LIMITE_37302;
    return valor * FACTOR_37302;
}
