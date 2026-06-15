// fichero 17933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17933;

Registro17933 crear_registro17933(int id) {
    Registro17933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
