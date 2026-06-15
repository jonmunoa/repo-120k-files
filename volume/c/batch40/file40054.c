// fichero 40054 -- macros y constantes -- MODIFICADO
#define LIMITE_40054 40254
#define FACTOR_40054 6

int aplicar_limite40054(int valor) {
    if (valor > LIMITE_40054) return LIMITE_40054;
    return valor * FACTOR_40054;
}
