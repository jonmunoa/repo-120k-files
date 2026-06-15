// fichero 5982 -- macros y constantes -- MODIFICADO
#define LIMITE_5982 6182
#define FACTOR_5982 4

int aplicar_limite5982(int valor) {
    if (valor > LIMITE_5982) return LIMITE_5982;
    return valor * FACTOR_5982;
}
