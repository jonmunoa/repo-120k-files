// fichero 43566 -- macros y constantes -- MODIFICADO
#define LIMITE_43566 43766
#define FACTOR_43566 3

int aplicar_limite43566(int valor) {
    if (valor > LIMITE_43566) return LIMITE_43566;
    return valor * FACTOR_43566;
}
