// fichero 40085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40085;

Registro40085 crear_registro40085(int id) {
    Registro40085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
