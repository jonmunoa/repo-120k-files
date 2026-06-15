// fichero 45622 -- macros y constantes -- MODIFICADO
#define LIMITE_45622 45822
#define FACTOR_45622 4

int aplicar_limite45622(int valor) {
    if (valor > LIMITE_45622) return LIMITE_45622;
    return valor * FACTOR_45622;
}
