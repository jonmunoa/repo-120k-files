// fichero 34566 -- macros y constantes -- MODIFICADO
#define LIMITE_34566 34766
#define FACTOR_34566 3

int aplicar_limite34566(int valor) {
    if (valor > LIMITE_34566) return LIMITE_34566;
    return valor * FACTOR_34566;
}
