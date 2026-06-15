// fichero 27986 -- macros y constantes -- MODIFICADO
#define LIMITE_27986 28186
#define FACTOR_27986 3

int aplicar_limite27986(int valor) {
    if (valor > LIMITE_27986) return LIMITE_27986;
    return valor * FACTOR_27986;
}
