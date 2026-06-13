// fichero 52726 -- macros y constantes
#define LIMITE_52726 52826
#define FACTOR_52726 2

int aplicar_limite52726(int valor) {
    if (valor > LIMITE_52726) return LIMITE_52726;
    return valor * FACTOR_52726;
}
