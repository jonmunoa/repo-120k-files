// fichero 25666 -- macros y constantes -- MODIFICADO
#define LIMITE_25666 25866
#define FACTOR_25666 3

int aplicar_limite25666(int valor) {
    if (valor > LIMITE_25666) return LIMITE_25666;
    return valor * FACTOR_25666;
}
