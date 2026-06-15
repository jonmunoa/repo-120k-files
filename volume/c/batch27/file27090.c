// fichero 27090 -- macros y constantes -- MODIFICADO
#define LIMITE_27090 27290
#define FACTOR_27090 2

int aplicar_limite27090(int valor) {
    if (valor > LIMITE_27090) return LIMITE_27090;
    return valor * FACTOR_27090;
}
