// fichero 11814 -- macros y constantes
#define LIMITE_11814 11914
#define FACTOR_11814 5

int aplicar_limite11814(int valor) {
    if (valor > LIMITE_11814) return LIMITE_11814;
    return valor * FACTOR_11814;
}
