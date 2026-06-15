// fichero 5190 -- macros y constantes -- MODIFICADO
#define LIMITE_5190 5390
#define FACTOR_5190 2

int aplicar_limite5190(int valor) {
    if (valor > LIMITE_5190) return LIMITE_5190;
    return valor * FACTOR_5190;
}
