// fichero 29826 -- macros y constantes -- MODIFICADO
#define LIMITE_29826 30026
#define FACTOR_29826 3

int aplicar_limite29826(int valor) {
    if (valor > LIMITE_29826) return LIMITE_29826;
    return valor * FACTOR_29826;
}
