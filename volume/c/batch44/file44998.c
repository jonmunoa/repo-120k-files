// fichero 44998 -- macros y constantes
#define LIMITE_44998 45098
#define FACTOR_44998 4

int aplicar_limite44998(int valor) {
    if (valor > LIMITE_44998) return LIMITE_44998;
    return valor * FACTOR_44998;
}
