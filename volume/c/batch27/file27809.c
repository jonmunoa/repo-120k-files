// fichero 27809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27809;

Registro27809 crear_registro27809(int id) {
    Registro27809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
