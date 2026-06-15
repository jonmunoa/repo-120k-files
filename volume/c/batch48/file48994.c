// fichero 48994 -- macros y constantes -- MODIFICADO
#define LIMITE_48994 49194
#define FACTOR_48994 6

int aplicar_limite48994(int valor) {
    if (valor > LIMITE_48994) return LIMITE_48994;
    return valor * FACTOR_48994;
}
