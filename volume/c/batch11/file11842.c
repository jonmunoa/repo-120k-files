// fichero 11842 -- macros y constantes -- MODIFICADO
#define LIMITE_11842 12042
#define FACTOR_11842 4

int aplicar_limite11842(int valor) {
    if (valor > LIMITE_11842) return LIMITE_11842;
    return valor * FACTOR_11842;
}
