// fichero 48150 -- macros y constantes -- MODIFICADO
#define LIMITE_48150 48350
#define FACTOR_48150 2

int aplicar_limite48150(int valor) {
    if (valor > LIMITE_48150) return LIMITE_48150;
    return valor * FACTOR_48150;
}
