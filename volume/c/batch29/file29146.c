// fichero 29146 -- macros y constantes
#define LIMITE_29146 29246
#define FACTOR_29146 2

int aplicar_limite29146(int valor) {
    if (valor > LIMITE_29146) return LIMITE_29146;
    return valor * FACTOR_29146;
}
