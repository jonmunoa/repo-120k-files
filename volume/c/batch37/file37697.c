// fichero 37697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37697;

Registro37697 crear_registro37697(int id) {
    Registro37697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37697(Registro37697 r) {
    return r.valor + r.id;
}
