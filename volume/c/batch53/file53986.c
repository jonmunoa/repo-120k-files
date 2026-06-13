// fichero 53986 -- macros y constantes
#define LIMITE_53986 54086
#define FACTOR_53986 2

int aplicar_limite53986(int valor) {
    if (valor > LIMITE_53986) return LIMITE_53986;
    return valor * FACTOR_53986;
}
