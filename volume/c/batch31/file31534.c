// fichero 31534 -- macros y constantes -- MODIFICADO
#define LIMITE_31534 31734
#define FACTOR_31534 6

int aplicar_limite31534(int valor) {
    if (valor > LIMITE_31534) return LIMITE_31534;
    return valor * FACTOR_31534;
}
