// fichero 37386 -- macros y constantes -- MODIFICADO
#define LIMITE_37386 37586
#define FACTOR_37386 3

int aplicar_limite37386(int valor) {
    if (valor > LIMITE_37386) return LIMITE_37386;
    return valor * FACTOR_37386;
}
