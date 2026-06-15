// fichero 33762 -- macros y constantes -- MODIFICADO
#define LIMITE_33762 33962
#define FACTOR_33762 4

int aplicar_limite33762(int valor) {
    if (valor > LIMITE_33762) return LIMITE_33762;
    return valor * FACTOR_33762;
}
