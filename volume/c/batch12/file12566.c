// fichero 12566 -- macros y constantes -- MODIFICADO
#define LIMITE_12566 12766
#define FACTOR_12566 3

int aplicar_limite12566(int valor) {
    if (valor > LIMITE_12566) return LIMITE_12566;
    return valor * FACTOR_12566;
}
