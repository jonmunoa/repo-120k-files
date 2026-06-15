// fichero 27594 -- macros y constantes -- MODIFICADO
#define LIMITE_27594 27794
#define FACTOR_27594 6

int aplicar_limite27594(int valor) {
    if (valor > LIMITE_27594) return LIMITE_27594;
    return valor * FACTOR_27594;
}
