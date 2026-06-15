// fichero 25190 -- macros y constantes -- MODIFICADO
#define LIMITE_25190 25390
#define FACTOR_25190 2

int aplicar_limite25190(int valor) {
    if (valor > LIMITE_25190) return LIMITE_25190;
    return valor * FACTOR_25190;
}
