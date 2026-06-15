// fichero 29614 -- macros y constantes -- MODIFICADO
#define LIMITE_29614 29814
#define FACTOR_29614 6

int aplicar_limite29614(int valor) {
    if (valor > LIMITE_29614) return LIMITE_29614;
    return valor * FACTOR_29614;
}
