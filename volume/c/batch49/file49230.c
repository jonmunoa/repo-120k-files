// fichero 49230 -- macros y constantes
#define LIMITE_49230 49330
#define FACTOR_49230 1

int aplicar_limite49230(int valor) {
    if (valor > LIMITE_49230) return LIMITE_49230;
    return valor * FACTOR_49230;
}
