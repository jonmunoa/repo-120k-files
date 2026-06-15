// fichero 31230 -- macros y constantes -- MODIFICADO
#define LIMITE_31230 31430
#define FACTOR_31230 2

int aplicar_limite31230(int valor) {
    if (valor > LIMITE_31230) return LIMITE_31230;
    return valor * FACTOR_31230;
}
