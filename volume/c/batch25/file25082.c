// fichero 25082 -- macros y constantes -- MODIFICADO
#define LIMITE_25082 25282
#define FACTOR_25082 4

int aplicar_limite25082(int valor) {
    if (valor > LIMITE_25082) return LIMITE_25082;
    return valor * FACTOR_25082;
}
