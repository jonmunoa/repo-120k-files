// fichero 48966 -- macros y constantes -- MODIFICADO
#define LIMITE_48966 49166
#define FACTOR_48966 3

int aplicar_limite48966(int valor) {
    if (valor > LIMITE_48966) return LIMITE_48966;
    return valor * FACTOR_48966;
}
