// fichero 29046 -- macros y constantes
#define LIMITE_29046 29146
#define FACTOR_29046 2

int aplicar_limite29046(int valor) {
    if (valor > LIMITE_29046) return LIMITE_29046;
    return valor * FACTOR_29046;
}
