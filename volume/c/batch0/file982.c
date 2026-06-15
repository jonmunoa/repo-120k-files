// fichero 982 -- macros y constantes -- MODIFICADO
#define LIMITE_982 1182
#define FACTOR_982 4

int aplicar_limite982(int valor) {
    if (valor > LIMITE_982) return LIMITE_982;
    return valor * FACTOR_982;
}
