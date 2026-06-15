// fichero 19918 -- macros y constantes -- MODIFICADO
#define LIMITE_19918 20118
#define FACTOR_19918 5

int aplicar_limite19918(int valor) {
    if (valor > LIMITE_19918) return LIMITE_19918;
    return valor * FACTOR_19918;
}
