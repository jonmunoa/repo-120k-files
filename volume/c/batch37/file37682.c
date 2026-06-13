// fichero 37682 -- macros y constantes
#define LIMITE_37682 37782
#define FACTOR_37682 3

int aplicar_limite37682(int valor) {
    if (valor > LIMITE_37682) return LIMITE_37682;
    return valor * FACTOR_37682;
}
