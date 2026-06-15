// fichero 15622 -- macros y constantes -- MODIFICADO
#define LIMITE_15622 15822
#define FACTOR_15622 4

int aplicar_limite15622(int valor) {
    if (valor > LIMITE_15622) return LIMITE_15622;
    return valor * FACTOR_15622;
}
