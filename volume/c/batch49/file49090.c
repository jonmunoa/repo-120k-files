// fichero 49090 -- macros y constantes -- MODIFICADO
#define LIMITE_49090 49290
#define FACTOR_49090 2

int aplicar_limite49090(int valor) {
    if (valor > LIMITE_49090) return LIMITE_49090;
    return valor * FACTOR_49090;
}
