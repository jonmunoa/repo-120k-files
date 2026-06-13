// fichero 40726 -- macros y constantes
#define LIMITE_40726 40826
#define FACTOR_40726 2

int aplicar_limite40726(int valor) {
    if (valor > LIMITE_40726) return LIMITE_40726;
    return valor * FACTOR_40726;
}
