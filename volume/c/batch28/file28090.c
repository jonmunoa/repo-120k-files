// fichero 28090 -- macros y constantes -- MODIFICADO
#define LIMITE_28090 28290
#define FACTOR_28090 2

int aplicar_limite28090(int valor) {
    if (valor > LIMITE_28090) return LIMITE_28090;
    return valor * FACTOR_28090;
}
