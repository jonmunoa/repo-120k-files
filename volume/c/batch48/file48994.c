// fichero 48994 -- macros y constantes
#define LIMITE_48994 49094
#define FACTOR_48994 5

int aplicar_limite48994(int valor) {
    if (valor > LIMITE_48994) return LIMITE_48994;
    return valor * FACTOR_48994;
}
