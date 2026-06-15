// fichero 3994 -- macros y constantes -- MODIFICADO
#define LIMITE_3994 4194
#define FACTOR_3994 6

int aplicar_limite3994(int valor) {
    if (valor > LIMITE_3994) return LIMITE_3994;
    return valor * FACTOR_3994;
}
