// fichero 53726 -- macros y constantes
#define LIMITE_53726 53826
#define FACTOR_53726 2

int aplicar_limite53726(int valor) {
    if (valor > LIMITE_53726) return LIMITE_53726;
    return valor * FACTOR_53726;
}
