// fichero 48170 -- macros y constantes -- MODIFICADO
#define LIMITE_48170 48370
#define FACTOR_48170 2

int aplicar_limite48170(int valor) {
    if (valor > LIMITE_48170) return LIMITE_48170;
    return valor * FACTOR_48170;
}
