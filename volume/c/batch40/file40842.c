// fichero 40842 -- macros y constantes -- MODIFICADO
#define LIMITE_40842 41042
#define FACTOR_40842 4

int aplicar_limite40842(int valor) {
    if (valor > LIMITE_40842) return LIMITE_40842;
    return valor * FACTOR_40842;
}
