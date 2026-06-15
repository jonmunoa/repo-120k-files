// fichero 17697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17697;

Registro17697 crear_registro17697(int id) {
    Registro17697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
