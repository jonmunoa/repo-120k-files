// fichero 24842 -- macros y constantes -- MODIFICADO
#define LIMITE_24842 25042
#define FACTOR_24842 4

int aplicar_limite24842(int valor) {
    if (valor > LIMITE_24842) return LIMITE_24842;
    return valor * FACTOR_24842;
}
