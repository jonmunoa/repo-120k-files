// fichero 28458 -- macros y constantes -- MODIFICADO
#define LIMITE_28458 28658
#define FACTOR_28458 5

int aplicar_limite28458(int valor) {
    if (valor > LIMITE_28458) return LIMITE_28458;
    return valor * FACTOR_28458;
}
