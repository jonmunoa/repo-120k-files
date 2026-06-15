// fichero 33829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33829;

Registro33829 crear_registro33829(int id) {
    Registro33829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
