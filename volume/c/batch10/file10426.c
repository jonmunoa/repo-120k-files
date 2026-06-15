// fichero 10426 -- macros y constantes -- MODIFICADO
#define LIMITE_10426 10626
#define FACTOR_10426 3

int aplicar_limite10426(int valor) {
    if (valor > LIMITE_10426) return LIMITE_10426;
    return valor * FACTOR_10426;
}
