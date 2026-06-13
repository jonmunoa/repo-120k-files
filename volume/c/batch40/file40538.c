// fichero 40538 -- macros y constantes
#define LIMITE_40538 40638
#define FACTOR_40538 4

int aplicar_limite40538(int valor) {
    if (valor > LIMITE_40538) return LIMITE_40538;
    return valor * FACTOR_40538;
}
