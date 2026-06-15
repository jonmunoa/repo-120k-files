// fichero 45798 -- macros y constantes -- MODIFICADO
#define LIMITE_45798 45998
#define FACTOR_45798 5

int aplicar_limite45798(int valor) {
    if (valor > LIMITE_45798) return LIMITE_45798;
    return valor * FACTOR_45798;
}
