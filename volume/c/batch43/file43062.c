// fichero 43062 -- macros y constantes
#define LIMITE_43062 43162
#define FACTOR_43062 3

int aplicar_limite43062(int valor) {
    if (valor > LIMITE_43062) return LIMITE_43062;
    return valor * FACTOR_43062;
}
