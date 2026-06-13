// fichero 29126 -- macros y constantes
#define LIMITE_29126 29226
#define FACTOR_29126 2

int aplicar_limite29126(int valor) {
    if (valor > LIMITE_29126) return LIMITE_29126;
    return valor * FACTOR_29126;
}
