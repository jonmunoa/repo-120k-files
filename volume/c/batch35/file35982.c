// fichero 35982 -- macros y constantes -- MODIFICADO
#define LIMITE_35982 36182
#define FACTOR_35982 4

int aplicar_limite35982(int valor) {
    if (valor > LIMITE_35982) return LIMITE_35982;
    return valor * FACTOR_35982;
}
