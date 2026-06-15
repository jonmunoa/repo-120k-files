// fichero 4057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4057;

Registro4057 crear_registro4057(int id) {
    Registro4057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
