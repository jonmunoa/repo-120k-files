// fichero 27090 -- macros y constantes
#define LIMITE_27090 27190
#define FACTOR_27090 1

int aplicar_limite27090(int valor) {
    if (valor > LIMITE_27090) return LIMITE_27090;
    return valor * FACTOR_27090;
}
