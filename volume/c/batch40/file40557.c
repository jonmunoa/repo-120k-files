// fichero 40557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40557;

Registro40557 crear_registro40557(int id) {
    Registro40557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
