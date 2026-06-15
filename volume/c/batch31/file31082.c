// fichero 31082 -- macros y constantes -- MODIFICADO
#define LIMITE_31082 31282
#define FACTOR_31082 4

int aplicar_limite31082(int valor) {
    if (valor > LIMITE_31082) return LIMITE_31082;
    return valor * FACTOR_31082;
}
