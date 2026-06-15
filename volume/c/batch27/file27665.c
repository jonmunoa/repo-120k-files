// fichero 27665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27665;

Registro27665 crear_registro27665(int id) {
    Registro27665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
