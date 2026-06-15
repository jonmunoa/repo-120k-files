// fichero 29130 -- macros y constantes -- MODIFICADO
#define LIMITE_29130 29330
#define FACTOR_29130 2

int aplicar_limite29130(int valor) {
    if (valor > LIMITE_29130) return LIMITE_29130;
    return valor * FACTOR_29130;
}
