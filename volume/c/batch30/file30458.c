// fichero 30458 -- macros y constantes -- MODIFICADO
#define LIMITE_30458 30658
#define FACTOR_30458 5

int aplicar_limite30458(int valor) {
    if (valor > LIMITE_30458) return LIMITE_30458;
    return valor * FACTOR_30458;
}
