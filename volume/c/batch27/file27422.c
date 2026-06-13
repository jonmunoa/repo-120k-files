// fichero 27422 -- macros y constantes
#define LIMITE_27422 27522
#define FACTOR_27422 3

int aplicar_limite27422(int valor) {
    if (valor > LIMITE_27422) return LIMITE_27422;
    return valor * FACTOR_27422;
}
