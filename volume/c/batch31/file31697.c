// fichero 31697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31697;

Registro31697 crear_registro31697(int id) {
    Registro31697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31697(Registro31697 r) {
    return r.valor + r.id;
}
