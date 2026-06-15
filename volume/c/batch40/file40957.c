// fichero 40957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40957;

Registro40957 crear_registro40957(int id) {
    Registro40957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
