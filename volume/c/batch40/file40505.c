// fichero 40505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40505;

Registro40505 crear_registro40505(int id) {
    Registro40505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
