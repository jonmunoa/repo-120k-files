// fichero 35126 -- macros y constantes
#define LIMITE_35126 35226
#define FACTOR_35126 2

int aplicar_limite35126(int valor) {
    if (valor > LIMITE_35126) return LIMITE_35126;
    return valor * FACTOR_35126;
}
