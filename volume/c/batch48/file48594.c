// fichero 48594 -- macros y constantes -- MODIFICADO
#define LIMITE_48594 48794
#define FACTOR_48594 6

int aplicar_limite48594(int valor) {
    if (valor > LIMITE_48594) return LIMITE_48594;
    return valor * FACTOR_48594;
}
