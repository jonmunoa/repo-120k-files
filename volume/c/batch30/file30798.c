// fichero 30798 -- macros y constantes -- MODIFICADO
#define LIMITE_30798 30998
#define FACTOR_30798 5

int aplicar_limite30798(int valor) {
    if (valor > LIMITE_30798) return LIMITE_30798;
    return valor * FACTOR_30798;
}
