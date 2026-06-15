// fichero 3082 -- macros y constantes -- MODIFICADO
#define LIMITE_3082 3282
#define FACTOR_3082 4

int aplicar_limite3082(int valor) {
    if (valor > LIMITE_3082) return LIMITE_3082;
    return valor * FACTOR_3082;
}
