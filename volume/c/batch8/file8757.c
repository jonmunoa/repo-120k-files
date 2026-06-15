// fichero 8757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8757;

Registro8757 crear_registro8757(int id) {
    Registro8757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
