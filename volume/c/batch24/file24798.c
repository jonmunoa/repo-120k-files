// fichero 24798 -- macros y constantes
#define LIMITE_24798 24898
#define FACTOR_24798 4

int aplicar_limite24798(int valor) {
    if (valor > LIMITE_24798) return LIMITE_24798;
    return valor * FACTOR_24798;
}
