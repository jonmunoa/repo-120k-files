// fichero 8982 -- macros y constantes -- MODIFICADO
#define LIMITE_8982 9182
#define FACTOR_8982 4

int aplicar_limite8982(int valor) {
    if (valor > LIMITE_8982) return LIMITE_8982;
    return valor * FACTOR_8982;
}
