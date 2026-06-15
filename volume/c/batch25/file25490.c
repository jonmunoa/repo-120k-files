// fichero 25490 -- macros y constantes -- MODIFICADO
#define LIMITE_25490 25690
#define FACTOR_25490 2

int aplicar_limite25490(int valor) {
    if (valor > LIMITE_25490) return LIMITE_25490;
    return valor * FACTOR_25490;
}
