// fichero 11801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11801;

Registro11801 crear_registro11801(int id) {
    Registro11801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
