// fichero 25982 -- macros y constantes -- MODIFICADO
#define LIMITE_25982 26182
#define FACTOR_25982 4

int aplicar_limite25982(int valor) {
    if (valor > LIMITE_25982) return LIMITE_25982;
    return valor * FACTOR_25982;
}
