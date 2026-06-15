// fichero 44190 -- macros y constantes -- MODIFICADO
#define LIMITE_44190 44390
#define FACTOR_44190 2

int aplicar_limite44190(int valor) {
    if (valor > LIMITE_44190) return LIMITE_44190;
    return valor * FACTOR_44190;
}
