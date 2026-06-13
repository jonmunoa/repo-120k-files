// fichero 40798 -- macros y constantes
#define LIMITE_40798 40898
#define FACTOR_40798 4

int aplicar_limite40798(int valor) {
    if (valor > LIMITE_40798) return LIMITE_40798;
    return valor * FACTOR_40798;
}
