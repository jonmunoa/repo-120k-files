// fichero 54918 -- macros y constantes
#define LIMITE_54918 55018
#define FACTOR_54918 4

int aplicar_limite54918(int valor) {
    if (valor > LIMITE_54918) return LIMITE_54918;
    return valor * FACTOR_54918;
}
