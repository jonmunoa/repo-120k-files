// fichero 43238 -- macros y constantes -- MODIFICADO
#define LIMITE_43238 43438
#define FACTOR_43238 5

int aplicar_limite43238(int valor) {
    if (valor > LIMITE_43238) return LIMITE_43238;
    return valor * FACTOR_43238;
}
