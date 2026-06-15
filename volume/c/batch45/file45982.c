// fichero 45982 -- macros y constantes -- MODIFICADO
#define LIMITE_45982 46182
#define FACTOR_45982 4

int aplicar_limite45982(int valor) {
    if (valor > LIMITE_45982) return LIMITE_45982;
    return valor * FACTOR_45982;
}
