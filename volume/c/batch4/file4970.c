// fichero 4970 -- macros y constantes -- MODIFICADO
#define LIMITE_4970 5170
#define FACTOR_4970 2

int aplicar_limite4970(int valor) {
    if (valor > LIMITE_4970) return LIMITE_4970;
    return valor * FACTOR_4970;
}
