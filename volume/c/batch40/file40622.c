// fichero 40622 -- macros y constantes -- MODIFICADO
#define LIMITE_40622 40822
#define FACTOR_40622 4

int aplicar_limite40622(int valor) {
    if (valor > LIMITE_40622) return LIMITE_40622;
    return valor * FACTOR_40622;
}
