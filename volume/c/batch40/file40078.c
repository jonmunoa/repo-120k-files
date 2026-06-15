// fichero 40078 -- macros y constantes -- MODIFICADO
#define LIMITE_40078 40278
#define FACTOR_40078 5

int aplicar_limite40078(int valor) {
    if (valor > LIMITE_40078) return LIMITE_40078;
    return valor * FACTOR_40078;
}
