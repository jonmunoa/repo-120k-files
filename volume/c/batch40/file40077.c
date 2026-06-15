// fichero 40077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40077;

Registro40077 crear_registro40077(int id) {
    Registro40077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
