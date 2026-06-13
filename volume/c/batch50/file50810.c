// fichero 50810 -- macros y constantes
#define LIMITE_50810 50910
#define FACTOR_50810 1

int aplicar_limite50810(int valor) {
    if (valor > LIMITE_50810) return LIMITE_50810;
    return valor * FACTOR_50810;
}
