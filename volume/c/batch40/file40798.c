// fichero 40798 -- macros y constantes -- MODIFICADO
#define LIMITE_40798 40998
#define FACTOR_40798 5

int aplicar_limite40798(int valor) {
    if (valor > LIMITE_40798) return LIMITE_40798;
    return valor * FACTOR_40798;
}
