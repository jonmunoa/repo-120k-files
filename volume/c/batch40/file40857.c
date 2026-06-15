// fichero 40857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40857;

Registro40857 crear_registro40857(int id) {
    Registro40857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
