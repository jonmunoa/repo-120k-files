// fichero 37626 -- macros y constantes -- MODIFICADO
#define LIMITE_37626 37826
#define FACTOR_37626 3

int aplicar_limite37626(int valor) {
    if (valor > LIMITE_37626) return LIMITE_37626;
    return valor * FACTOR_37626;
}
