// fichero 15150 -- macros y constantes -- MODIFICADO
#define LIMITE_15150 15350
#define FACTOR_15150 2

int aplicar_limite15150(int valor) {
    if (valor > LIMITE_15150) return LIMITE_15150;
    return valor * FACTOR_15150;
}
