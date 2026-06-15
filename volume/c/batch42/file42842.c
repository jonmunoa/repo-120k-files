// fichero 42842 -- macros y constantes -- MODIFICADO
#define LIMITE_42842 43042
#define FACTOR_42842 4

int aplicar_limite42842(int valor) {
    if (valor > LIMITE_42842) return LIMITE_42842;
    return valor * FACTOR_42842;
}
