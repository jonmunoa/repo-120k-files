// fichero 21090 -- macros y constantes
#define LIMITE_21090 21190
#define FACTOR_21090 1

int aplicar_limite21090(int valor) {
    if (valor > LIMITE_21090) return LIMITE_21090;
    return valor * FACTOR_21090;
}
