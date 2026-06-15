// fichero 48666 -- macros y constantes -- MODIFICADO
#define LIMITE_48666 48866
#define FACTOR_48666 3

int aplicar_limite48666(int valor) {
    if (valor > LIMITE_48666) return LIMITE_48666;
    return valor * FACTOR_48666;
}
