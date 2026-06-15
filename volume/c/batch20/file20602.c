// fichero 20602 -- macros y constantes -- MODIFICADO
#define LIMITE_20602 20802
#define FACTOR_20602 4

int aplicar_limite20602(int valor) {
    if (valor > LIMITE_20602) return LIMITE_20602;
    return valor * FACTOR_20602;
}
