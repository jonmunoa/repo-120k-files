// fichero 39458 -- macros y constantes -- MODIFICADO
#define LIMITE_39458 39658
#define FACTOR_39458 5

int aplicar_limite39458(int valor) {
    if (valor > LIMITE_39458) return LIMITE_39458;
    return valor * FACTOR_39458;
}
