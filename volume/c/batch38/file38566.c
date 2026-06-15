// fichero 38566 -- macros y constantes -- MODIFICADO
#define LIMITE_38566 38766
#define FACTOR_38566 3

int aplicar_limite38566(int valor) {
    if (valor > LIMITE_38566) return LIMITE_38566;
    return valor * FACTOR_38566;
}
