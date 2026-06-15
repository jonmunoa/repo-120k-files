// fichero 24521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24521;

Registro24521 crear_registro24521(int id) {
    Registro24521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
