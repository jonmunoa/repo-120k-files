// fichero 570 -- macros y constantes -- MODIFICADO
#define LIMITE_570 770
#define FACTOR_570 2

int aplicar_limite570(int valor) {
    if (valor > LIMITE_570) return LIMITE_570;
    return valor * FACTOR_570;
}
