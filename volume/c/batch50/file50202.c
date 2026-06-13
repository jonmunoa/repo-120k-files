// fichero 50202 -- macros y constantes
#define LIMITE_50202 50302
#define FACTOR_50202 3

int aplicar_limite50202(int valor) {
    if (valor > LIMITE_50202) return LIMITE_50202;
    return valor * FACTOR_50202;
}
