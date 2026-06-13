// fichero 33550 -- macros y constantes
#define LIMITE_33550 33650
#define FACTOR_33550 1

int aplicar_limite33550(int valor) {
    if (valor > LIMITE_33550) return LIMITE_33550;
    return valor * FACTOR_33550;
}
