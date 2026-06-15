// fichero 17690 -- macros y constantes -- MODIFICADO
#define LIMITE_17690 17890
#define FACTOR_17690 2

int aplicar_limite17690(int valor) {
    if (valor > LIMITE_17690) return LIMITE_17690;
    return valor * FACTOR_17690;
}
