// fichero 38694 -- macros y constantes -- MODIFICADO
#define LIMITE_38694 38894
#define FACTOR_38694 6

int aplicar_limite38694(int valor) {
    if (valor > LIMITE_38694) return LIMITE_38694;
    return valor * FACTOR_38694;
}
