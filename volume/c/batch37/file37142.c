// fichero 37142 -- macros y constantes
#define LIMITE_37142 37242
#define FACTOR_37142 3

int aplicar_limite37142(int valor) {
    if (valor > LIMITE_37142) return LIMITE_37142;
    return valor * FACTOR_37142;
}
