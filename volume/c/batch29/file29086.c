// fichero 29086 -- macros y constantes -- MODIFICADO
#define LIMITE_29086 29286
#define FACTOR_29086 3

int aplicar_limite29086(int valor) {
    if (valor > LIMITE_29086) return LIMITE_29086;
    return valor * FACTOR_29086;
}
