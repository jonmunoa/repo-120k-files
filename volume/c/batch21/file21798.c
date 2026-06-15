// fichero 21798 -- macros y constantes -- MODIFICADO
#define LIMITE_21798 21998
#define FACTOR_21798 5

int aplicar_limite21798(int valor) {
    if (valor > LIMITE_21798) return LIMITE_21798;
    return valor * FACTOR_21798;
}
