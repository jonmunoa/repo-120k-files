// fichero 27458 -- macros y constantes -- MODIFICADO
#define LIMITE_27458 27658
#define FACTOR_27458 5

int aplicar_limite27458(int valor) {
    if (valor > LIMITE_27458) return LIMITE_27458;
    return valor * FACTOR_27458;
}
