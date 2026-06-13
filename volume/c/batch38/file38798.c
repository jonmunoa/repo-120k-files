// fichero 38798 -- macros y constantes
#define LIMITE_38798 38898
#define FACTOR_38798 4

int aplicar_limite38798(int valor) {
    if (valor > LIMITE_38798) return LIMITE_38798;
    return valor * FACTOR_38798;
}
