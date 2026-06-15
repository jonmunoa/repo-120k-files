// fichero 44933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44933;

Registro44933 crear_registro44933(int id) {
    Registro44933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
