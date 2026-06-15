// fichero 24846 -- macros y constantes -- MODIFICADO
#define LIMITE_24846 25046
#define FACTOR_24846 3

int aplicar_limite24846(int valor) {
    if (valor > LIMITE_24846) return LIMITE_24846;
    return valor * FACTOR_24846;
}
