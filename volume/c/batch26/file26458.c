// fichero 26458 -- macros y constantes -- MODIFICADO
#define LIMITE_26458 26658
#define FACTOR_26458 5

int aplicar_limite26458(int valor) {
    if (valor > LIMITE_26458) return LIMITE_26458;
    return valor * FACTOR_26458;
}
