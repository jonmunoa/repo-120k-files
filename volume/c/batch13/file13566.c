// fichero 13566 -- macros y constantes -- MODIFICADO
#define LIMITE_13566 13766
#define FACTOR_13566 3

int aplicar_limite13566(int valor) {
    if (valor > LIMITE_13566) return LIMITE_13566;
    return valor * FACTOR_13566;
}
