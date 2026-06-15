// fichero 31038 -- macros y constantes -- MODIFICADO
#define LIMITE_31038 31238
#define FACTOR_31038 5

int aplicar_limite31038(int valor) {
    if (valor > LIMITE_31038) return LIMITE_31038;
    return valor * FACTOR_31038;
}
