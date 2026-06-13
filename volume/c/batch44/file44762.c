// fichero 44762 -- macros y constantes
#define LIMITE_44762 44862
#define FACTOR_44762 3

int aplicar_limite44762(int valor) {
    if (valor > LIMITE_44762) return LIMITE_44762;
    return valor * FACTOR_44762;
}
