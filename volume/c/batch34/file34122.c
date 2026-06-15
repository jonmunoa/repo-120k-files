// fichero 34122 -- macros y constantes -- MODIFICADO
#define LIMITE_34122 34322
#define FACTOR_34122 4

int aplicar_limite34122(int valor) {
    if (valor > LIMITE_34122) return LIMITE_34122;
    return valor * FACTOR_34122;
}
