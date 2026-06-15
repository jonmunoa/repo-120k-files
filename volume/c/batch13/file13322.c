// fichero 13322 -- macros y constantes -- MODIFICADO
#define LIMITE_13322 13522
#define FACTOR_13322 4

int aplicar_limite13322(int valor) {
    if (valor > LIMITE_13322) return LIMITE_13322;
    return valor * FACTOR_13322;
}
