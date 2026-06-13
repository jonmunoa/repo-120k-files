// fichero 40286 -- macros y constantes
#define LIMITE_40286 40386
#define FACTOR_40286 2

int aplicar_limite40286(int valor) {
    if (valor > LIMITE_40286) return LIMITE_40286;
    return valor * FACTOR_40286;
}
