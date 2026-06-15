// fichero 43458 -- macros y constantes -- MODIFICADO
#define LIMITE_43458 43658
#define FACTOR_43458 5

int aplicar_limite43458(int valor) {
    if (valor > LIMITE_43458) return LIMITE_43458;
    return valor * FACTOR_43458;
}
