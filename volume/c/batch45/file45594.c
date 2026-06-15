// fichero 45594 -- macros y constantes -- MODIFICADO
#define LIMITE_45594 45794
#define FACTOR_45594 6

int aplicar_limite45594(int valor) {
    if (valor > LIMITE_45594) return LIMITE_45594;
    return valor * FACTOR_45594;
}
