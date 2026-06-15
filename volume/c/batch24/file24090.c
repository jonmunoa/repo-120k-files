// fichero 24090 -- macros y constantes -- MODIFICADO
#define LIMITE_24090 24290
#define FACTOR_24090 2

int aplicar_limite24090(int valor) {
    if (valor > LIMITE_24090) return LIMITE_24090;
    return valor * FACTOR_24090;
}
