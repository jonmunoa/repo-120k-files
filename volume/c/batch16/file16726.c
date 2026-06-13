// fichero 16726 -- macros y constantes
#define LIMITE_16726 16826
#define FACTOR_16726 2

int aplicar_limite16726(int valor) {
    if (valor > LIMITE_16726) return LIMITE_16726;
    return valor * FACTOR_16726;
}
