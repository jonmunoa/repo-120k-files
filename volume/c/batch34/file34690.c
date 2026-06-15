// fichero 34690 -- macros y constantes -- MODIFICADO
#define LIMITE_34690 34890
#define FACTOR_34690 2

int aplicar_limite34690(int valor) {
    if (valor > LIMITE_34690) return LIMITE_34690;
    return valor * FACTOR_34690;
}
