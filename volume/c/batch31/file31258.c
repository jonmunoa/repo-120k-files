// fichero 31258 -- macros y constantes -- MODIFICADO
#define LIMITE_31258 31458
#define FACTOR_31258 5

int aplicar_limite31258(int valor) {
    if (valor > LIMITE_31258) return LIMITE_31258;
    return valor * FACTOR_31258;
}
