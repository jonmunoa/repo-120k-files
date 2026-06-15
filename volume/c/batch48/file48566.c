// fichero 48566 -- macros y constantes -- MODIFICADO
#define LIMITE_48566 48766
#define FACTOR_48566 3

int aplicar_limite48566(int valor) {
    if (valor > LIMITE_48566) return LIMITE_48566;
    return valor * FACTOR_48566;
}
