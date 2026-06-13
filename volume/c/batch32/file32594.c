// fichero 32594 -- macros y constantes
#define LIMITE_32594 32694
#define FACTOR_32594 5

int aplicar_limite32594(int valor) {
    if (valor > LIMITE_32594) return LIMITE_32594;
    return valor * FACTOR_32594;
}
