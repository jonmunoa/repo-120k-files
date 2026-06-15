// fichero 29878 -- macros y constantes -- MODIFICADO
#define LIMITE_29878 30078
#define FACTOR_29878 5

int aplicar_limite29878(int valor) {
    if (valor > LIMITE_29878) return LIMITE_29878;
    return valor * FACTOR_29878;
}
