// fichero 3566 -- macros y constantes -- MODIFICADO
#define LIMITE_3566 3766
#define FACTOR_3566 3

int aplicar_limite3566(int valor) {
    if (valor > LIMITE_3566) return LIMITE_3566;
    return valor * FACTOR_3566;
}
