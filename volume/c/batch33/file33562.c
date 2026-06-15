// fichero 33562 -- macros y constantes -- MODIFICADO
#define LIMITE_33562 33762
#define FACTOR_33562 4

int aplicar_limite33562(int valor) {
    if (valor > LIMITE_33562) return LIMITE_33562;
    return valor * FACTOR_33562;
}
