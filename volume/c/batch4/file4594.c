// fichero 4594 -- macros y constantes -- MODIFICADO
#define LIMITE_4594 4794
#define FACTOR_4594 6

int aplicar_limite4594(int valor) {
    if (valor > LIMITE_4594) return LIMITE_4594;
    return valor * FACTOR_4594;
}
