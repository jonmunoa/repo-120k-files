// fichero 41874 -- macros y constantes -- MODIFICADO
#define LIMITE_41874 42074
#define FACTOR_41874 6

int aplicar_limite41874(int valor) {
    if (valor > LIMITE_41874) return LIMITE_41874;
    return valor * FACTOR_41874;
}
