// fichero 6078 -- macros y constantes -- MODIFICADO
#define LIMITE_6078 6278
#define FACTOR_6078 5

int aplicar_limite6078(int valor) {
    if (valor > LIMITE_6078) return LIMITE_6078;
    return valor * FACTOR_6078;
}
