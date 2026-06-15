// fichero 13622 -- macros y constantes -- MODIFICADO
#define LIMITE_13622 13822
#define FACTOR_13622 4

int aplicar_limite13622(int valor) {
    if (valor > LIMITE_13622) return LIMITE_13622;
    return valor * FACTOR_13622;
}
