// fichero 45802 -- macros y constantes -- MODIFICADO
#define LIMITE_45802 46002
#define FACTOR_45802 4

int aplicar_limite45802(int valor) {
    if (valor > LIMITE_45802) return LIMITE_45802;
    return valor * FACTOR_45802;
}
