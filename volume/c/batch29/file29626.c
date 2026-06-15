// fichero 29626 -- macros y constantes -- MODIFICADO
#define LIMITE_29626 29826
#define FACTOR_29626 3

int aplicar_limite29626(int valor) {
    if (valor > LIMITE_29626) return LIMITE_29626;
    return valor * FACTOR_29626;
}
