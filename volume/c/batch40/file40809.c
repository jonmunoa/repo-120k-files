// fichero 40809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40809;

Registro40809 crear_registro40809(int id) {
    Registro40809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
