// fichero 26566 -- macros y constantes -- MODIFICADO
#define LIMITE_26566 26766
#define FACTOR_26566 3

int aplicar_limite26566(int valor) {
    if (valor > LIMITE_26566) return LIMITE_26566;
    return valor * FACTOR_26566;
}
