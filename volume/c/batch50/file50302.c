// fichero 50302 -- macros y constantes
#define LIMITE_50302 50402
#define FACTOR_50302 3

int aplicar_limite50302(int valor) {
    if (valor > LIMITE_50302) return LIMITE_50302;
    return valor * FACTOR_50302;
}
