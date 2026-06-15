// fichero 24086 -- macros y constantes -- MODIFICADO
#define LIMITE_24086 24286
#define FACTOR_24086 3

int aplicar_limite24086(int valor) {
    if (valor > LIMITE_24086) return LIMITE_24086;
    return valor * FACTOR_24086;
}
