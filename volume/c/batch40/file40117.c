// fichero 40117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40117;

Registro40117 crear_registro40117(int id) {
    Registro40117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
