// fichero 41502 -- macros y constantes
#define LIMITE_41502 41602
#define FACTOR_41502 3

int aplicar_limite41502(int valor) {
    if (valor > LIMITE_41502) return LIMITE_41502;
    return valor * FACTOR_41502;
}
