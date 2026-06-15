// fichero 37998 -- macros y constantes -- MODIFICADO
#define LIMITE_37998 38198
#define FACTOR_37998 5

int aplicar_limite37998(int valor) {
    if (valor > LIMITE_37998) return LIMITE_37998;
    return valor * FACTOR_37998;
}
