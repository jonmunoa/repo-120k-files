// fichero 45798 -- macros y constantes
#define LIMITE_45798 45898
#define FACTOR_45798 4

int aplicar_limite45798(int valor) {
    if (valor > LIMITE_45798) return LIMITE_45798;
    return valor * FACTOR_45798;
}
