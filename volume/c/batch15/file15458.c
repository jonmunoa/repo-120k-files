// fichero 15458 -- macros y constantes
#define LIMITE_15458 15558
#define FACTOR_15458 4

int aplicar_limite15458(int valor) {
    if (valor > LIMITE_15458) return LIMITE_15458;
    return valor * FACTOR_15458;
}
