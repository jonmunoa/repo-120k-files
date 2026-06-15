// fichero 40141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40141;

Registro40141 crear_registro40141(int id) {
    Registro40141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
