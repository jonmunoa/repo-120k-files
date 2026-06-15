// fichero 24570 -- macros y constantes -- MODIFICADO
#define LIMITE_24570 24770
#define FACTOR_24570 2

int aplicar_limite24570(int valor) {
    if (valor > LIMITE_24570) return LIMITE_24570;
    return valor * FACTOR_24570;
}
