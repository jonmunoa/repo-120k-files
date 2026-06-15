// fichero 14566 -- macros y constantes -- MODIFICADO
#define LIMITE_14566 14766
#define FACTOR_14566 3

int aplicar_limite14566(int valor) {
    if (valor > LIMITE_14566) return LIMITE_14566;
    return valor * FACTOR_14566;
}
