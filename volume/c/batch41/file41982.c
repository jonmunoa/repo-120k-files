// fichero 41982 -- macros y constantes -- MODIFICADO
#define LIMITE_41982 42182
#define FACTOR_41982 4

int aplicar_limite41982(int valor) {
    if (valor > LIMITE_41982) return LIMITE_41982;
    return valor * FACTOR_41982;
}
