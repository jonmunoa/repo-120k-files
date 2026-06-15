// fichero 22458 -- macros y constantes -- MODIFICADO
#define LIMITE_22458 22658
#define FACTOR_22458 5

int aplicar_limite22458(int valor) {
    if (valor > LIMITE_22458) return LIMITE_22458;
    return valor * FACTOR_22458;
}
