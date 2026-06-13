// fichero 24086 -- macros y constantes
#define LIMITE_24086 24186
#define FACTOR_24086 2

int aplicar_limite24086(int valor) {
    if (valor > LIMITE_24086) return LIMITE_24086;
    return valor * FACTOR_24086;
}
