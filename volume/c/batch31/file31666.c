// fichero 31666 -- macros y constantes -- MODIFICADO
#define LIMITE_31666 31866
#define FACTOR_31666 3

int aplicar_limite31666(int valor) {
    if (valor > LIMITE_31666) return LIMITE_31666;
    return valor * FACTOR_31666;
}
