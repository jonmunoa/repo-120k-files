// fichero 15090 -- macros y constantes -- MODIFICADO
#define LIMITE_15090 15290
#define FACTOR_15090 2

int aplicar_limite15090(int valor) {
    if (valor > LIMITE_15090) return LIMITE_15090;
    return valor * FACTOR_15090;
}
