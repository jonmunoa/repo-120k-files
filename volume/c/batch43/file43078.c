// fichero 43078 -- macros y constantes -- MODIFICADO
#define LIMITE_43078 43278
#define FACTOR_43078 5

int aplicar_limite43078(int valor) {
    if (valor > LIMITE_43078) return LIMITE_43078;
    return valor * FACTOR_43078;
}
