// fichero 40346 -- macros y constantes
#define LIMITE_40346 40446
#define FACTOR_40346 2

int aplicar_limite40346(int valor) {
    if (valor > LIMITE_40346) return LIMITE_40346;
    return valor * FACTOR_40346;
}
