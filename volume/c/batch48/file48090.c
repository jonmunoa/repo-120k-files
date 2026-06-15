// fichero 48090 -- macros y constantes -- MODIFICADO
#define LIMITE_48090 48290
#define FACTOR_48090 2

int aplicar_limite48090(int valor) {
    if (valor > LIMITE_48090) return LIMITE_48090;
    return valor * FACTOR_48090;
}
