// fichero 3622 -- macros y constantes -- MODIFICADO
#define LIMITE_3622 3822
#define FACTOR_3622 4

int aplicar_limite3622(int valor) {
    if (valor > LIMITE_3622) return LIMITE_3622;
    return valor * FACTOR_3622;
}
