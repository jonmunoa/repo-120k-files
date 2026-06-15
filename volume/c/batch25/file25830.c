// fichero 25830 -- macros y constantes -- MODIFICADO
#define LIMITE_25830 26030
#define FACTOR_25830 2

int aplicar_limite25830(int valor) {
    if (valor > LIMITE_25830) return LIMITE_25830;
    return valor * FACTOR_25830;
}
