// fichero 43062 -- macros y constantes -- MODIFICADO
#define LIMITE_43062 43262
#define FACTOR_43062 4

int aplicar_limite43062(int valor) {
    if (valor > LIMITE_43062) return LIMITE_43062;
    return valor * FACTOR_43062;
}
