// fichero 3798 -- macros y constantes
#define LIMITE_3798 3898
#define FACTOR_3798 4

int aplicar_limite3798(int valor) {
    if (valor > LIMITE_3798) return LIMITE_3798;
    return valor * FACTOR_3798;
}
