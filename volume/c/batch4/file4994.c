// fichero 4994 -- macros y constantes -- MODIFICADO
#define LIMITE_4994 5194
#define FACTOR_4994 6

int aplicar_limite4994(int valor) {
    if (valor > LIMITE_4994) return LIMITE_4994;
    return valor * FACTOR_4994;
}
