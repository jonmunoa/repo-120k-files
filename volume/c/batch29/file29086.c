// fichero 29086 -- macros y constantes
#define LIMITE_29086 29186
#define FACTOR_29086 2

int aplicar_limite29086(int valor) {
    if (valor > LIMITE_29086) return LIMITE_29086;
    return valor * FACTOR_29086;
}
