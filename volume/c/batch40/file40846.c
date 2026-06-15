// fichero 40846 -- macros y constantes -- MODIFICADO
#define LIMITE_40846 41046
#define FACTOR_40846 3

int aplicar_limite40846(int valor) {
    if (valor > LIMITE_40846) return LIMITE_40846;
    return valor * FACTOR_40846;
}
