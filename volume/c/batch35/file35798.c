// fichero 35798 -- macros y constantes
#define LIMITE_35798 35898
#define FACTOR_35798 4

int aplicar_limite35798(int valor) {
    if (valor > LIMITE_35798) return LIMITE_35798;
    return valor * FACTOR_35798;
}
