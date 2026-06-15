// fichero 48970 -- macros y constantes -- MODIFICADO
#define LIMITE_48970 49170
#define FACTOR_48970 2

int aplicar_limite48970(int valor) {
    if (valor > LIMITE_48970) return LIMITE_48970;
    return valor * FACTOR_48970;
}
