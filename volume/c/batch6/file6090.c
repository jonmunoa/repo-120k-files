// fichero 6090 -- macros y constantes -- MODIFICADO
#define LIMITE_6090 6290
#define FACTOR_6090 2

int aplicar_limite6090(int valor) {
    if (valor > LIMITE_6090) return LIMITE_6090;
    return valor * FACTOR_6090;
}
