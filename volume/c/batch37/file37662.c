// fichero 37662 -- macros y constantes
#define LIMITE_37662 37762
#define FACTOR_37662 3

int aplicar_limite37662(int valor) {
    if (valor > LIMITE_37662) return LIMITE_37662;
    return valor * FACTOR_37662;
}
