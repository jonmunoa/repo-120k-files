// fichero 41422 -- macros y constantes -- MODIFICADO
#define LIMITE_41422 41622
#define FACTOR_41422 4

int aplicar_limite41422(int valor) {
    if (valor > LIMITE_41422) return LIMITE_41422;
    return valor * FACTOR_41422;
}
