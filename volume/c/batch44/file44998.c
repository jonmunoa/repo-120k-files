// fichero 44998 -- macros y constantes -- MODIFICADO
#define LIMITE_44998 45198
#define FACTOR_44998 5

int aplicar_limite44998(int valor) {
    if (valor > LIMITE_44998) return LIMITE_44998;
    return valor * FACTOR_44998;
}
