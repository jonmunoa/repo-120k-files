// fichero 50502 -- macros y constantes
#define LIMITE_50502 50602
#define FACTOR_50502 3

int aplicar_limite50502(int valor) {
    if (valor > LIMITE_50502) return LIMITE_50502;
    return valor * FACTOR_50502;
}
