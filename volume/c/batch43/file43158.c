// fichero 43158 -- macros y constantes -- MODIFICADO
#define LIMITE_43158 43358
#define FACTOR_43158 5

int aplicar_limite43158(int valor) {
    if (valor > LIMITE_43158) return LIMITE_43158;
    return valor * FACTOR_43158;
}
