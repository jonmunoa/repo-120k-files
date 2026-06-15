// fichero 48982 -- macros y constantes -- MODIFICADO
#define LIMITE_48982 49182
#define FACTOR_48982 4

int aplicar_limite48982(int valor) {
    if (valor > LIMITE_48982) return LIMITE_48982;
    return valor * FACTOR_48982;
}
