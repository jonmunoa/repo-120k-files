// fichero 40194 -- macros y constantes -- MODIFICADO
#define LIMITE_40194 40394
#define FACTOR_40194 6

int aplicar_limite40194(int valor) {
    if (valor > LIMITE_40194) return LIMITE_40194;
    return valor * FACTOR_40194;
}
