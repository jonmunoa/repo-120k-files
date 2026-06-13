// fichero 24842 -- macros y constantes
#define LIMITE_24842 24942
#define FACTOR_24842 3

int aplicar_limite24842(int valor) {
    if (valor > LIMITE_24842) return LIMITE_24842;
    return valor * FACTOR_24842;
}
