// fichero 6798 -- macros y constantes -- MODIFICADO
#define LIMITE_6798 6998
#define FACTOR_6798 5

int aplicar_limite6798(int valor) {
    if (valor > LIMITE_6798) return LIMITE_6798;
    return valor * FACTOR_6798;
}
