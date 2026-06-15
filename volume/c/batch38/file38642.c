// fichero 38642 -- macros y constantes -- MODIFICADO
#define LIMITE_38642 38842
#define FACTOR_38642 4

int aplicar_limite38642(int valor) {
    if (valor > LIMITE_38642) return LIMITE_38642;
    return valor * FACTOR_38642;
}
