// fichero 44765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44765;

Registro44765 crear_registro44765(int id) {
    Registro44765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
