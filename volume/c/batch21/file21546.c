// fichero 21546 -- macros y constantes -- MODIFICADO
#define LIMITE_21546 21746
#define FACTOR_21546 3

int aplicar_limite21546(int valor) {
    if (valor > LIMITE_21546) return LIMITE_21546;
    return valor * FACTOR_21546;
}
