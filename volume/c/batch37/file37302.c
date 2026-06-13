// fichero 37302 -- macros y constantes
#define LIMITE_37302 37402
#define FACTOR_37302 3

int aplicar_limite37302(int valor) {
    if (valor > LIMITE_37302) return LIMITE_37302;
    return valor * FACTOR_37302;
}
