// fichero 34197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34197;

Registro34197 crear_registro34197(int id) {
    Registro34197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34197(Registro34197 r) {
    return r.valor + r.id;
}
