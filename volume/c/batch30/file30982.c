// fichero 30982 -- macros y constantes -- MODIFICADO
#define LIMITE_30982 31182
#define FACTOR_30982 4

int aplicar_limite30982(int valor) {
    if (valor > LIMITE_30982) return LIMITE_30982;
    return valor * FACTOR_30982;
}
