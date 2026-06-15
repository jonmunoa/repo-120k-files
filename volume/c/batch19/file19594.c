// fichero 19594 -- macros y constantes -- MODIFICADO
#define LIMITE_19594 19794
#define FACTOR_19594 6

int aplicar_limite19594(int valor) {
    if (valor > LIMITE_19594) return LIMITE_19594;
    return valor * FACTOR_19594;
}
