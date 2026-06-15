// fichero 32266 -- macros y constantes -- MODIFICADO
#define LIMITE_32266 32466
#define FACTOR_32266 3

int aplicar_limite32266(int valor) {
    if (valor > LIMITE_32266) return LIMITE_32266;
    return valor * FACTOR_32266;
}
