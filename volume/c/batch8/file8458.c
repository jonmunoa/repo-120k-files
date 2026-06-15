// fichero 8458 -- macros y constantes -- MODIFICADO
#define LIMITE_8458 8658
#define FACTOR_8458 5

int aplicar_limite8458(int valor) {
    if (valor > LIMITE_8458) return LIMITE_8458;
    return valor * FACTOR_8458;
}
