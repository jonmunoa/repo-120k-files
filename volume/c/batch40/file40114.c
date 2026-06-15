// fichero 40114 -- macros y constantes -- MODIFICADO
#define LIMITE_40114 40314
#define FACTOR_40114 6

int aplicar_limite40114(int valor) {
    if (valor > LIMITE_40114) return LIMITE_40114;
    return valor * FACTOR_40114;
}
