// fichero 37566 -- macros y constantes -- MODIFICADO
#define LIMITE_37566 37766
#define FACTOR_37566 3

int aplicar_limite37566(int valor) {
    if (valor > LIMITE_37566) return LIMITE_37566;
    return valor * FACTOR_37566;
}
