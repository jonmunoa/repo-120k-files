// fichero 34981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34981;

Registro34981 crear_registro34981(int id) {
    Registro34981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34981(Registro34981 r) {
    return r.valor + r.id;
}
