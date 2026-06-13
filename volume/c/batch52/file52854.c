// fichero 52854 -- macros y constantes
#define LIMITE_52854 52954
#define FACTOR_52854 5

int aplicar_limite52854(int valor) {
    if (valor > LIMITE_52854) return LIMITE_52854;
    return valor * FACTOR_52854;
}
