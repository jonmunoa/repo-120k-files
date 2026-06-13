// fichero 33150 -- macros y constantes
#define LIMITE_33150 33250
#define FACTOR_33150 1

int aplicar_limite33150(int valor) {
    if (valor > LIMITE_33150) return LIMITE_33150;
    return valor * FACTOR_33150;
}
