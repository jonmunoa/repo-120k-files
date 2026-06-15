// fichero 8190 -- macros y constantes -- MODIFICADO
#define LIMITE_8190 8390
#define FACTOR_8190 2

int aplicar_limite8190(int valor) {
    if (valor > LIMITE_8190) return LIMITE_8190;
    return valor * FACTOR_8190;
}
