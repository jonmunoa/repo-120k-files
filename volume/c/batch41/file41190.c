// fichero 41190 -- macros y constantes -- MODIFICADO
#define LIMITE_41190 41390
#define FACTOR_41190 2

int aplicar_limite41190(int valor) {
    if (valor > LIMITE_41190) return LIMITE_41190;
    return valor * FACTOR_41190;
}
