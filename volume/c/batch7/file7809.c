// fichero 7809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7809;

Registro7809 crear_registro7809(int id) {
    Registro7809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
