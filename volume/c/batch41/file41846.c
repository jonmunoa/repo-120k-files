// fichero 41846 -- macros y constantes -- MODIFICADO
#define LIMITE_41846 42046
#define FACTOR_41846 3

int aplicar_limite41846(int valor) {
    if (valor > LIMITE_41846) return LIMITE_41846;
    return valor * FACTOR_41846;
}
