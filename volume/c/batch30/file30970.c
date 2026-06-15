// fichero 30970 -- macros y constantes -- MODIFICADO
#define LIMITE_30970 31170
#define FACTOR_30970 2

int aplicar_limite30970(int valor) {
    if (valor > LIMITE_30970) return LIMITE_30970;
    return valor * FACTOR_30970;
}
