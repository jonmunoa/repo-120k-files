// fichero 46762 -- macros y constantes
#define LIMITE_46762 46862
#define FACTOR_46762 3

int aplicar_limite46762(int valor) {
    if (valor > LIMITE_46762) return LIMITE_46762;
    return valor * FACTOR_46762;
}
