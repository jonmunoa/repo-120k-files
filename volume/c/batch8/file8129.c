// fichero 8129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8129;

Registro8129 crear_registro8129(int id) {
    Registro8129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
