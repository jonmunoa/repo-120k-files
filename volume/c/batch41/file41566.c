// fichero 41566 -- macros y constantes -- MODIFICADO
#define LIMITE_41566 41766
#define FACTOR_41566 3

int aplicar_limite41566(int valor) {
    if (valor > LIMITE_41566) return LIMITE_41566;
    return valor * FACTOR_41566;
}
