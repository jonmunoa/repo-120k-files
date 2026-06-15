// fichero 40569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40569;

Registro40569 crear_registro40569(int id) {
    Registro40569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
