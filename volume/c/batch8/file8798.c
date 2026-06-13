// fichero 8798 -- macros y constantes
#define LIMITE_8798 8898
#define FACTOR_8798 4

int aplicar_limite8798(int valor) {
    if (valor > LIMITE_8798) return LIMITE_8798;
    return valor * FACTOR_8798;
}
