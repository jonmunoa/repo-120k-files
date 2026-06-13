// fichero 24458 -- macros y constantes
#define LIMITE_24458 24558
#define FACTOR_24458 4

int aplicar_limite24458(int valor) {
    if (valor > LIMITE_24458) return LIMITE_24458;
    return valor * FACTOR_24458;
}
