// fichero 11458 -- macros y constantes
#define LIMITE_11458 11558
#define FACTOR_11458 4

int aplicar_limite11458(int valor) {
    if (valor > LIMITE_11458) return LIMITE_11458;
    return valor * FACTOR_11458;
}
