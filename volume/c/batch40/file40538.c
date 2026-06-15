// fichero 40538 -- macros y constantes -- MODIFICADO
#define LIMITE_40538 40738
#define FACTOR_40538 5

int aplicar_limite40538(int valor) {
    if (valor > LIMITE_40538) return LIMITE_40538;
    return valor * FACTOR_40538;
}
