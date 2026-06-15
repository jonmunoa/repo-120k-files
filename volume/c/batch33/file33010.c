// fichero 33010 -- macros y constantes -- MODIFICADO
#define LIMITE_33010 33210
#define FACTOR_33010 2

int aplicar_limite33010(int valor) {
    if (valor > LIMITE_33010) return LIMITE_33010;
    return valor * FACTOR_33010;
}
