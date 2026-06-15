// fichero 19090 -- macros y constantes -- MODIFICADO
#define LIMITE_19090 19290
#define FACTOR_19090 2

int aplicar_limite19090(int valor) {
    if (valor > LIMITE_19090) return LIMITE_19090;
    return valor * FACTOR_19090;
}
