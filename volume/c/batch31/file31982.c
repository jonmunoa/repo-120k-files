// fichero 31982 -- macros y constantes -- MODIFICADO
#define LIMITE_31982 32182
#define FACTOR_31982 4

int aplicar_limite31982(int valor) {
    if (valor > LIMITE_31982) return LIMITE_31982;
    return valor * FACTOR_31982;
}
