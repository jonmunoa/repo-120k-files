// fichero 33010 -- macros y constantes
#define LIMITE_33010 33110
#define FACTOR_33010 1

int aplicar_limite33010(int valor) {
    if (valor > LIMITE_33010) return LIMITE_33010;
    return valor * FACTOR_33010;
}
