// fichero 10458 -- macros y constantes -- MODIFICADO
#define LIMITE_10458 10658
#define FACTOR_10458 5

int aplicar_limite10458(int valor) {
    if (valor > LIMITE_10458) return LIMITE_10458;
    return valor * FACTOR_10458;
}
