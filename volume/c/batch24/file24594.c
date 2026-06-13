// fichero 24594 -- macros y constantes
#define LIMITE_24594 24694
#define FACTOR_24594 5

int aplicar_limite24594(int valor) {
    if (valor > LIMITE_24594) return LIMITE_24594;
    return valor * FACTOR_24594;
}
