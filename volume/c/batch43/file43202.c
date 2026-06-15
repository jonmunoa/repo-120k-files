// fichero 43202 -- macros y constantes -- MODIFICADO
#define LIMITE_43202 43402
#define FACTOR_43202 4

int aplicar_limite43202(int valor) {
    if (valor > LIMITE_43202) return LIMITE_43202;
    return valor * FACTOR_43202;
}
