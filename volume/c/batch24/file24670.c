// fichero 24670 -- macros y constantes -- MODIFICADO
#define LIMITE_24670 24870
#define FACTOR_24670 2

int aplicar_limite24670(int valor) {
    if (valor > LIMITE_24670) return LIMITE_24670;
    return valor * FACTOR_24670;
}
