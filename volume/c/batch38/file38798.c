// fichero 38798 -- macros y constantes -- MODIFICADO
#define LIMITE_38798 38998
#define FACTOR_38798 5

int aplicar_limite38798(int valor) {
    if (valor > LIMITE_38798) return LIMITE_38798;
    return valor * FACTOR_38798;
}
