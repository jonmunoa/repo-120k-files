// fichero 52981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52981;

Registro52981 crear_registro52981(int id) {
    Registro52981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52981(Registro52981 r) {
    return r.valor + r.id;
}
