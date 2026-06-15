// fichero 29950 -- macros y constantes -- MODIFICADO
#define LIMITE_29950 30150
#define FACTOR_29950 2

int aplicar_limite29950(int valor) {
    if (valor > LIMITE_29950) return LIMITE_29950;
    return valor * FACTOR_29950;
}
