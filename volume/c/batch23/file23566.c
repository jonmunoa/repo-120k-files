// fichero 23566 -- macros y constantes -- MODIFICADO
#define LIMITE_23566 23766
#define FACTOR_23566 3

int aplicar_limite23566(int valor) {
    if (valor > LIMITE_23566) return LIMITE_23566;
    return valor * FACTOR_23566;
}
