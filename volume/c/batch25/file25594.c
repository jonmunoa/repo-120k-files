// fichero 25594 -- macros y constantes -- MODIFICADO
#define LIMITE_25594 25794
#define FACTOR_25594 6

int aplicar_limite25594(int valor) {
    if (valor > LIMITE_25594) return LIMITE_25594;
    return valor * FACTOR_25594;
}
