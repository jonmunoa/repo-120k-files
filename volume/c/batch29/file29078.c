// fichero 29078 -- macros y constantes -- MODIFICADO
#define LIMITE_29078 29278
#define FACTOR_29078 5

int aplicar_limite29078(int valor) {
    if (valor > LIMITE_29078) return LIMITE_29078;
    return valor * FACTOR_29078;
}
