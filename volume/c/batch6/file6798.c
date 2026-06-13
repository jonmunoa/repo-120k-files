// fichero 6798 -- macros y constantes
#define LIMITE_6798 6898
#define FACTOR_6798 4

int aplicar_limite6798(int valor) {
    if (valor > LIMITE_6798) return LIMITE_6798;
    return valor * FACTOR_6798;
}
