// fichero 24594 -- macros y constantes -- MODIFICADO
#define LIMITE_24594 24794
#define FACTOR_24594 6

int aplicar_limite24594(int valor) {
    if (valor > LIMITE_24594) return LIMITE_24594;
    return valor * FACTOR_24594;
}
