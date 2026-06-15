// fichero 41214 -- macros y constantes -- MODIFICADO
#define LIMITE_41214 41414
#define FACTOR_41214 6

int aplicar_limite41214(int valor) {
    if (valor > LIMITE_41214) return LIMITE_41214;
    return valor * FACTOR_41214;
}
