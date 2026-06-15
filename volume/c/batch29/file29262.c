// fichero 29262 -- macros y constantes -- MODIFICADO
#define LIMITE_29262 29462
#define FACTOR_29262 4

int aplicar_limite29262(int valor) {
    if (valor > LIMITE_29262) return LIMITE_29262;
    return valor * FACTOR_29262;
}
