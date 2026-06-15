// fichero 7534 -- macros y constantes -- MODIFICADO
#define LIMITE_7534 7734
#define FACTOR_7534 6

int aplicar_limite7534(int valor) {
    if (valor > LIMITE_7534) return LIMITE_7534;
    return valor * FACTOR_7534;
}
