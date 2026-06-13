// fichero 43854 -- macros y constantes
#define LIMITE_43854 43954
#define FACTOR_43854 5

int aplicar_limite43854(int valor) {
    if (valor > LIMITE_43854) return LIMITE_43854;
    return valor * FACTOR_43854;
}
