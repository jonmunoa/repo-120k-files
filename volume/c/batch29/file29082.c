// fichero 29082 -- macros y constantes
#define LIMITE_29082 29182
#define FACTOR_29082 3

int aplicar_limite29082(int valor) {
    if (valor > LIMITE_29082) return LIMITE_29082;
    return valor * FACTOR_29082;
}
