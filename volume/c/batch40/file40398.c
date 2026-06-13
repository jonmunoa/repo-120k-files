// fichero 40398 -- macros y constantes
#define LIMITE_40398 40498
#define FACTOR_40398 4

int aplicar_limite40398(int valor) {
    if (valor > LIMITE_40398) return LIMITE_40398;
    return valor * FACTOR_40398;
}
