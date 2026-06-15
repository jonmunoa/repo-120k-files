// fichero 13982 -- macros y constantes -- MODIFICADO
#define LIMITE_13982 14182
#define FACTOR_13982 4

int aplicar_limite13982(int valor) {
    if (valor > LIMITE_13982) return LIMITE_13982;
    return valor * FACTOR_13982;
}
