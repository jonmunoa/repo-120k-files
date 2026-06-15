// fichero 45382 -- macros y constantes -- MODIFICADO
#define LIMITE_45382 45582
#define FACTOR_45382 4

int aplicar_limite45382(int valor) {
    if (valor > LIMITE_45382) return LIMITE_45382;
    return valor * FACTOR_45382;
}
