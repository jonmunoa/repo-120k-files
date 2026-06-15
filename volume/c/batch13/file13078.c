// fichero 13078 -- macros y constantes -- MODIFICADO
#define LIMITE_13078 13278
#define FACTOR_13078 5

int aplicar_limite13078(int valor) {
    if (valor > LIMITE_13078) return LIMITE_13078;
    return valor * FACTOR_13078;
}
