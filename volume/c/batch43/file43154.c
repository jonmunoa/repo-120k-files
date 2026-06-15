// fichero 43154 -- macros y constantes -- MODIFICADO
#define LIMITE_43154 43354
#define FACTOR_43154 6

int aplicar_limite43154(int valor) {
    if (valor > LIMITE_43154) return LIMITE_43154;
    return valor * FACTOR_43154;
}
