// fichero 11550 -- macros y constantes -- MODIFICADO
#define LIMITE_11550 11750
#define FACTOR_11550 2

int aplicar_limite11550(int valor) {
    if (valor > LIMITE_11550) return LIMITE_11550;
    return valor * FACTOR_11550;
}
