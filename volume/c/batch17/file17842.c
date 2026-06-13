// fichero 17842 -- macros y constantes
#define LIMITE_17842 17942
#define FACTOR_17842 3

int aplicar_limite17842(int valor) {
    if (valor > LIMITE_17842) return LIMITE_17842;
    return valor * FACTOR_17842;
}
