// fichero 27998 -- macros y constantes -- MODIFICADO
#define LIMITE_27998 28198
#define FACTOR_27998 5

int aplicar_limite27998(int valor) {
    if (valor > LIMITE_27998) return LIMITE_27998;
    return valor * FACTOR_27998;
}
