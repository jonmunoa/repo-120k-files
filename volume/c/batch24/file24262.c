// fichero 24262 -- macros y constantes -- MODIFICADO
#define LIMITE_24262 24462
#define FACTOR_24262 4

int aplicar_limite24262(int valor) {
    if (valor > LIMITE_24262) return LIMITE_24262;
    return valor * FACTOR_24262;
}
