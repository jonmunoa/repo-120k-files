// fichero 45458 -- macros y constantes
#define LIMITE_45458 45558
#define FACTOR_45458 4

int aplicar_limite45458(int valor) {
    if (valor > LIMITE_45458) return LIMITE_45458;
    return valor * FACTOR_45458;
}
