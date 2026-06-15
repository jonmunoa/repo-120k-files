// fichero 23458 -- macros y constantes -- MODIFICADO
#define LIMITE_23458 23658
#define FACTOR_23458 5

int aplicar_limite23458(int valor) {
    if (valor > LIMITE_23458) return LIMITE_23458;
    return valor * FACTOR_23458;
}
