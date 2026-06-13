// fichero 3594 -- macros y constantes
#define LIMITE_3594 3694
#define FACTOR_3594 5

int aplicar_limite3594(int valor) {
    if (valor > LIMITE_3594) return LIMITE_3594;
    return valor * FACTOR_3594;
}
