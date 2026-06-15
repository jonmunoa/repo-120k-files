// fichero 24730 -- macros y constantes -- MODIFICADO
#define LIMITE_24730 24930
#define FACTOR_24730 2

int aplicar_limite24730(int valor) {
    if (valor > LIMITE_24730) return LIMITE_24730;
    return valor * FACTOR_24730;
}
