// fichero 38646 -- macros y constantes
#define LIMITE_38646 38746
#define FACTOR_38646 2

int aplicar_limite38646(int valor) {
    if (valor > LIMITE_38646) return LIMITE_38646;
    return valor * FACTOR_38646;
}
