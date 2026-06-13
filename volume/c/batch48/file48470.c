// fichero 48470 -- macros y constantes
#define LIMITE_48470 48570
#define FACTOR_48470 1

int aplicar_limite48470(int valor) {
    if (valor > LIMITE_48470) return LIMITE_48470;
    return valor * FACTOR_48470;
}
