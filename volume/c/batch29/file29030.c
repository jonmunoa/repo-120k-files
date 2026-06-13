// fichero 29030 -- macros y constantes
#define LIMITE_29030 29130
#define FACTOR_29030 1

int aplicar_limite29030(int valor) {
    if (valor > LIMITE_29030) return LIMITE_29030;
    return valor * FACTOR_29030;
}
