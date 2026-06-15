// fichero 48054 -- macros y constantes -- MODIFICADO
#define LIMITE_48054 48254
#define FACTOR_48054 6

int aplicar_limite48054(int valor) {
    if (valor > LIMITE_48054) return LIMITE_48054;
    return valor * FACTOR_48054;
}
