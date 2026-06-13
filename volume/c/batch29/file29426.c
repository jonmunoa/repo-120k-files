// fichero 29426 -- macros y constantes
#define LIMITE_29426 29526
#define FACTOR_29426 2

int aplicar_limite29426(int valor) {
    if (valor > LIMITE_29426) return LIMITE_29426;
    return valor * FACTOR_29426;
}
