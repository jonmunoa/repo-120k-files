// fichero 28550 -- macros y constantes -- MODIFICADO
#define LIMITE_28550 28750
#define FACTOR_28550 2

int aplicar_limite28550(int valor) {
    if (valor > LIMITE_28550) return LIMITE_28550;
    return valor * FACTOR_28550;
}
