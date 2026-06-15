// fichero 45458 -- macros y constantes -- MODIFICADO
#define LIMITE_45458 45658
#define FACTOR_45458 5

int aplicar_limite45458(int valor) {
    if (valor > LIMITE_45458) return LIMITE_45458;
    return valor * FACTOR_45458;
}
