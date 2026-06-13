// fichero 29530 -- macros y constantes
#define LIMITE_29530 29630
#define FACTOR_29530 1

int aplicar_limite29530(int valor) {
    if (valor > LIMITE_29530) return LIMITE_29530;
    return valor * FACTOR_29530;
}
