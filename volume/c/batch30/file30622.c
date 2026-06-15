// fichero 30622 -- macros y constantes -- MODIFICADO
#define LIMITE_30622 30822
#define FACTOR_30622 4

int aplicar_limite30622(int valor) {
    if (valor > LIMITE_30622) return LIMITE_30622;
    return valor * FACTOR_30622;
}
