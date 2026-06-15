// fichero 41502 -- macros y constantes -- MODIFICADO
#define LIMITE_41502 41702
#define FACTOR_41502 4

int aplicar_limite41502(int valor) {
    if (valor > LIMITE_41502) return LIMITE_41502;
    return valor * FACTOR_41502;
}
