// fichero 40694 -- macros y constantes -- MODIFICADO
#define LIMITE_40694 40894
#define FACTOR_40694 6

int aplicar_limite40694(int valor) {
    if (valor > LIMITE_40694) return LIMITE_40694;
    return valor * FACTOR_40694;
}
